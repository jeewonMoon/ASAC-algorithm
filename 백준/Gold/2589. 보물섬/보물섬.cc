#include<iostream>
#include<string>
#include<cstring>
#include<queue>
#include<tuple>
using namespace std;

int w, h;
string map[51];
bool visited[51][51] = { false };
queue<tuple<int, int, int>> route;
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };

//지도 범위 내에 있는 지 확인
bool valid(int y, int x) {
	return y<0 || x<0 || y>=h || x>=w;
}

int BFS(int y, int x) {
	int depth = 0;
	route.emplace(y, x, 0);
	visited[y][x] = true;

	while (!route.empty()) {
		int cy = get<0>(route.front());
		int cx = get<1>(route.front());
		int d = get<2>(route.front());
		depth = d;
		route.pop();

		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (valid(ny, nx)) continue;

			if (map[ny][nx] == 'L' && !visited[ny][nx]) {
				visited[ny][nx] = true;
				route.emplace(ny, nx, d + 1);
			}
		}
	}
	return depth;
}

int main() {
	int answer = 0;
	cin >> h >> w;

	for (int i = 0; i < h; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == 'L') {
				int cnt = BFS(i, j);
				if (answer < cnt) answer = cnt;	//최단거리중 가장 긴 시간
				memset(visited, 0, sizeof(visited));
			}
		}
	}

	cout << answer << "\n";
	return 0;
}