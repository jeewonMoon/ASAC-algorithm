#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

//0: 빈 칸, 6: 벽, 1~5: cctv
//1: 한쪽만
//2: 180도로 감시(<- ->)
//3: 직각으로 감시(| ->)
//4: 세 방향 (<- | ->)
//5: 네 방향(모든 방향)

//최소 사각지대 -> 최대 시야
//dfs

// right, up, left, down
int dy[4] = { 0, -1, 0, 1 };
int dx[4] = { 1, 0, -1, 0 };

int n, m;
int blind = 64;
int office[9][9];
vector<pair<int, int>> cctv;

void check(int y, int x, int d) {
	d %= 4;
	while (true) {
		y += dy[d];
		x += dx[d];

		if (y < 0 || x < 0 || y >= n || x >= m) return;	//사무실 밖
		if (office[y][x] == 6) return;	//벽

		if (office[y][x] != 0) continue;	//cctv거나 이미 체크
		office[y][x] = -1;
	}
}

void rotate(int idx) {
	if (idx == cctv.size()) {	//cctv 다 확인 완
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (office[i][j] == 0) cnt++;
			}
		}

		blind = min(blind, cnt);
		return;
	}

	int y = cctv[idx].first;
	int x = cctv[idx].second;
	int officeCopy[9][9];

	for (int i = 0; i < 4; i++) {	//방향 돌리면서 확인
		//원본 복사해놓고
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				officeCopy[j][k] = office[j][k];
			}
		}

		if (office[y][x] == 1) {	// 한 방향
			check(y, x, i);
		}
		else if (office[y][x] == 2) {	//180도
			check(y, x, i);
			check(y, x, i + 2);
		}
		else if (office[y][x] == 3) {	//90도
			check(y, x, i);
			check(y, x, i + 1);
		}
		else if (office[y][x] == 4) {	//ㅗ
			check(y, x, i);
			check(y, x, i + 1);
			check(y, x, i + 2);
		}
		else if (office[y][x] == 5) {	//+
			check(y, x, i);
			check(y, x, i + 1);
			check(y, x, i + 2);
			check(y, x, i + 3);
		}
		rotate(idx+1);	//다음 cctv
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				office[j][k] = officeCopy[j][k];	//원본 복구
			}
		}

	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> office[i][j];

			if (office[i][j] > 0 && office[i][j] < 6)
				cctv.push_back({i, j});
		}
	}

	rotate(0);

	cout << blind << "\n";

	return 0;
}