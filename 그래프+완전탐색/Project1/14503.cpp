#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main() {
	int n, m, a;
	vector<vector<int>> room;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a;
		room[i].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int ny = i;
			int nx = j;
			if (room[i][j] == 0) room[i][j] = 1;
			for (int k = 0; k < 4; k++) {
				if (room[ny + dy[k]][nx + dx[k]] == 0) {

				}
			}
		}
	}

	return 0;
}