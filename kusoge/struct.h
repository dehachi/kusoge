#include <vector>
using namespace std;

typedef struct {
	int x, y, head_r, bottom, walk_speed,run_speed, direction, state;
	vector<vector<int>> body;
	vector<vector<int>> knife;
	vector<vector<int>> knife_design;
	vector<int> knife_design_black;
}ch_t;