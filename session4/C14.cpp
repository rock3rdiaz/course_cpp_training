// sesion 4, class 14. Matrix

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<vector<int>> grid(5, vector<int>(5, 1));

	for(int i = 0; i < grid.size(); i++) {
		for(int j = 0; j < grid[i].size(); j++) {
			cout << grid[j][j] << flush;
		}
		cout << endl;
	}

	return 0;
}
