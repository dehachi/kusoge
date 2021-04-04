#include "DxLib.h"
#include "struct.h"
#include "variable.h";

void init_ch() {
	CH.x = 150;
	CH.y = 0;
	CH.head_r = 12;
	CH.bottom = CH.y + bottom_ch_1;
	CH.walk_speed = 7;
	CH.run_speed = 10;
	CH.body = poase_ch_7;
	CH.knife = knife_ch_2;
	CH.knife_design = knife_ch_design_1;
	CH.knife_design_black = knife_ch_design_black_1;
	CH.direction = 1;
	CH.state = 0;
}

void init_main() {
	init_ch();
}

vector<vector<int>> make_body_ch() {
	vector<vector<int>> body_ch;
	int x = CH.x;
	int y = CH.y;
	for (auto v : CH.body) {
		body_ch.push_back({x+v[0], y+v[1], x+v[2], y+v[3], v[4]});
	}
	return body_ch;
}

vector<vector<int>> turn_body_ch(vector<vector<int>> body) {
	vector<vector<int>> body_turn;
	for (auto v : body) {
		body_turn.push_back({ v[0] * -1, v[1], v[2] * -1, v[3], v[4] });
	}
	return body_turn;
}

vector<vector<int>> turn_knife_ch(vector<vector<int>> knife) {
	vector<vector<int>> knife_turn;
	for (auto v : knife) {
		knife_turn.push_back({ v[0] * -1, v[1] });
	}
	return knife_turn;
}

void update_ch() {
	if (CH.bottom < GROUND_Y) CH.y += GRAVITY;
	CH.bottom = CH.y + bottom_ch_1;
}

void draw_ch() {
	DrawCircle(CH.x, CH.y, CH.head_r, BLACK, 0, 2);
	for (auto e : make_body_ch()) {
		DrawLine(e[0], e[1], e[2], e[3], BLACK, e[4]);
	}
}

void draw_knife_assist(int i, int j) {
	vector<vector<int>> k = CH.knife;
	int x = CH.x;
	int y = CH.y;
	DrawLine(x + k[i][0], y + k[i][1], x + k[j][0], y + k[j][1], BLACK, 2);
}

void draw_knife_assist_box(int a, int b, int c, int d) {
	vector<vector<int>> k = CH.knife;
	int x = CH.x;
	int y = CH.y;
	DrawQuadrangle(x + k[a][0], y + k[a][1], x + k[b][0], y + k[b][1], x + k[c][0], y + k[c][1], x + k[d][0], y + k[d][1], BLACK, 1);
}

void draw_knife() {
	vector<vector<int>> k = CH.knife;
	int x = CH.x;
	int y = CH.y;
	for (auto v : CH.knife_design) {
		draw_knife_assist(v[0], v[1]);
	}
	vector<int> v = CH.knife_design_black;
	draw_knife_assist_box(v[0], v[1], v[2], v[3]);
}

void update_main() {
	update_ch();
}

void draw_main() {
	ClearDrawScreen();
	DrawFormatString(0, 0, BLACK, "%d", FLAME);
	DrawLine(0, GROUND_Y, 640, GROUND_Y, BLACK, 5);
	draw_ch();
	draw_knife();
	ScreenFlip();
}

void check_walk_run_ch() {
	if (walk_ch_index >= walk_ch_index_size) {
		walk_ch_index = 0;
	}
	if (walk_ch_index < 0) {
		walk_ch_index = walk_ch_index_size - 1;
	}
	if (run_ch_index >= run_ch_index_size) {
		run_ch_index = 0;
	}
	if (run_ch_index < 0) {
		run_ch_index = run_ch_index_size - 1;
	}
}

void operation() {
	GetHitKeyStateAll(KEYS);
	if (KEYS[KEY_INPUT_RIGHT]) {
		if (KEYS[KEY_INPUT_SPACE]) {
			CH.state = 1;
			++run_ch_index;
			CH.direction = 1;
			CH.x += CH.run_speed;
			knife_ch_index = 1;
			check_walk_run_ch();
		}
		else if (FLAME % 2 == 0){
			CH.state = 0;
			++walk_ch_index;
			CH.direction = 1;
			CH.x += CH.walk_speed;
			knife_ch_index = 0;
			check_walk_run_ch();
		}
	}
	else if (KEYS[KEY_INPUT_LEFT]) {
		if (KEYS[KEY_INPUT_SPACE]) {
			CH.state = 1;
			--run_ch_index;
			CH.direction = 0;
			CH.x -= CH.run_speed;
			knife_ch_index = 1;
			check_walk_run_ch();
		}
		else if (FLAME % 2 == 0) {
			CH.state = 0;
			--walk_ch_index;
			CH.direction = 0;
			CH.x -= CH.walk_speed;
			knife_ch_index = 0;
			check_walk_run_ch();
		}
	}
	else {
		CH.state = 0;
		walk_ch_index = 0;
		knife_ch_index = 0;
	}
	if (!KEYS[KEY_INPUT_SPACE]) run_ch_index = 0;
	if (CH.state == 0) {
		if (CH.direction == 1) {
			CH.body = walk_ch[walk_ch_index];
			CH.knife = knife_ch[knife_ch_index];
		}
		else if (CH.direction == 0) {
			CH.body = turn_body_ch(walk_ch[walk_ch_index]);
			CH.knife = turn_knife_ch(knife_ch[knife_ch_index]);
		}
	}
	else if (CH.state == 1) {
		if (CH.direction == 1) {
			CH.body = run_ch[run_ch_index];
			CH.knife = knife_ch[knife_ch_index];
		}
		else if (CH.direction == 0) {
			CH.body = turn_body_ch(run_ch[run_ch_index]);
			CH.knife = turn_knife_ch(knife_ch[knife_ch_index]);
		}
	}
}

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
	SetUseDXArchiveFlag(FALSE);
	ChangeWindowMode(TRUE);
	SetBackgroundColor(255, 255, 255);
	SetDrawScreen(DX_SCREEN_BACK);
	if (DxLib_Init() == -1) return -1;
	init_main();
	while (true) {
		if (ProcessMessage() == -1) return -1;
		draw_main();
		operation();
		update_main();
		++FLAME;
	}
	DxLib_End();
	return 0;
}