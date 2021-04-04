__declspec(selectany) int GROUND_Y = 400;
__declspec(selectany) int GRAVITY = 10;
__declspec(selectany) ch_t CH;
__declspec(selectany) unsigned int BLACK = GetColor(0, 0, 0);
__declspec(selectany) char KEYS[256];
__declspec(selectany) long long FLAME = 0;
__declspec(selectany) vector<vector<int>> poase_ch_1 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, 4, 62, 2},
	{4, 62, 7, 82, 2},
	// 左足
	{-6, 42, -6, 62, 2},
	{-6, 62, -16, 82, 2},
	// 右手
	{0, 12, -10, 29, 2},
	{-10, 29, 0, 46, 2},
	// 左手
	{0, 12, 0, 33, 2},
	{0, 33, 3, 54, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_2 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, 4, 62, 2},
	{4, 62, 7, 82, 2},
	// 左足
	{-6, 42, -6, 62, 2},
	{-6, 62, -22, 70, 2},
	// 右手
	{0, 12, -12, 29, 2},
	{-12, 29, 0, 46, 2},
	// 左手
	{0, 12, -2, 33, 2},
	{-2, 33, 3, 53, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_3 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -3, 62, 2},
	{-3, 62, -6, 82, 2},
	// 左足
	{-6, 42, 6, 62, 2},
	{6, 62, -10, 70, 2},
	// 右手
	{0, 12, -10, 29, 2},
	{-10, 29, 0, 46, 2},
	// 左手
	{0, 12, 0, 33, 2},
	{0, 33, 5, 50, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_4 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -6, 62, 2},
	{-6, 62, -10, 82, 2},
	// 左足
	{-6, 42, 9, 52, 2},
	{9, 52, 11, 70, 2},
	// 右手
	{0, 12, -12, 29, 2},
	{-12, 29, 0, 46, 2},
	// 左手
	{0, 12, 2, 33, 2},
	{2, 33, 3, 47, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_5 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -8, 62, 2},
	{-8, 62, -11, 82, 2},
	// 左足
	{-6, 42, 6, 52, 2},
	{6, 52, 2, 70, 2},
	// 右手
	{0, 12, -10, 29, 2},
	{-10, 29, 0, 46, 2},
	// 左手
	{0, 12, 0, 33, 2},
	{0, 33, 2, 50, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_6 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -7, 62, 2},
	{-7, 62, -12, 82, 2},
	// 左足
	{-6, 42, 5, 60, 2},
	{5, 60, 0, 82, 2},
	// 右手
	{0, 12, -12, 29, 2},
	{-12, 29, 0, 46, 2},
	// 左手
	{0, 12, 0, 33, 2},
	{0, 33, 1, 50, 2},
};
__declspec(selectany) int bottom_ch_1 = 82;
__declspec(selectany) vector<vector<int>> poase_ch_7 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, 4, 62, 2},
	{4, 62, 7, 82, 2},
	// 左足
	{-6, 42, -6, 62, 2},
	{-6, 62, -16, 82, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_8 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, 4, 62, 2},
	{4, 62, 7, 82, 2},
	// 左足
	{-6, 42, -6, 62, 2},
	{-6, 62, -22, 70, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_9 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -3, 62, 2},
	{-3, 62, -6, 82, 2},
	// 左足
	{-6, 42, 6, 62, 2},
	{6, 62, -10, 70, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_10 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -6, 62, 2},
	{-6, 62, -10, 82, 2},
	// 左足
	{-6, 42, 9, 52, 2},
	{9, 52, 11, 70, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_11 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -8, 62, 2},
	{-8, 62, -11, 82, 2},
	// 左足
	{-6, 42, 6, 52, 2},
	{6, 52, 2, 70, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> poase_ch_12 = {
	// 胴体
	{0, 12, -3, 27, 2},
	{-3, 27, -6, 42, 2},
	// 右足
	{-6, 42, -7, 62, 2},
	{-7, 62, -12, 82, 2},
	// 左足
	{-6, 42, 5, 60, 2},
	{5, 60, 0, 82, 2},
	// 右手
	{0, 12, -9, 0, 2},
	{-9, 0, 0, -27, 2},
	// 左手
	{8, 11, 20, -2, 2},
	{20, -2, 0, -27, 2},
};
__declspec(selectany) vector<vector<int>> knife_ch_1 = {
	{-12, 52},
	{77, 10},
	{10, 42},
	{17, 59},
	{84, 27},
	{15, 55},
	{81, 23},
};
__declspec(selectany) vector<vector<int>> knife_ch_2 = {
	{5, -15},
	{-37, -104},
	{-5, -37},
	{12, -44},
	{-20, -111},
	{8, -42},
	{-24, -108},
};
__declspec(selectany) vector<vector<int>> knife_ch_design_1 = {
	{0, 1},
	{2, 3},
	{3, 4},
	{1, 4},
	{5, 6},
};
__declspec(selectany) vector<int> knife_ch_design_black_1 = {6, 1, 2, 5};
__declspec(selectany) vector<vector<vector<int>>> walk_ch = {
	poase_ch_1,
	poase_ch_2,
	poase_ch_3,
	poase_ch_4,
	poase_ch_5,
	poase_ch_6,
};
__declspec(selectany) int walk_ch_index = 0;
__declspec(selectany) int walk_ch_index_size = walk_ch.size();
__declspec(selectany) vector<vector<vector<int>>> run_ch = {
	poase_ch_7,
	poase_ch_8,
	poase_ch_9,
	poase_ch_10,
	poase_ch_11,
	poase_ch_12,
};
__declspec(selectany) int run_ch_index = 0;
__declspec(selectany) int run_ch_index_size = run_ch.size();
__declspec(selectany) vector<vector<vector<int>>> knife_ch = {
	knife_ch_1,
	knife_ch_2,
};
__declspec(selectany) int knife_ch_index = 0;