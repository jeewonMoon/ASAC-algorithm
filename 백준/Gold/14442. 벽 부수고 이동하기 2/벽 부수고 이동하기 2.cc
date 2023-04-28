#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

//bfs
//k만큼 벽 부수다가 그 이후는 1만나면 continue
vector<string> map;
queue<pair<pair<int, int>, pair<int, int>>> route;
int visited[1001][1001][11] = { 0 };
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };

int n, m, k;

bool valid(int y, int x) {
	return y >= 0 && x >= 0 && y < n && x < m;
}

int BFS() {
	visited[0][0][0] = 1;
	route.push(make_pair(make_pair(0, 0), make_pair(1, 0)));

	while (!route.empty()) {
		int cy = route.front().first.first;
		int cx = route.front().first.second;
		int d = route.front().second.first;
		int cnt = route.front().second.second;

		route.pop();

		if (cy == n - 1 && cx == m - 1) return d;

		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (!valid(ny, nx)) continue;

			if (!visited[ny][nx][cnt]) {
				if (map[ny][nx] == '1') {
					if (cnt < k && !visited[ny][nx][cnt + 1]) {
						visited[ny][nx][cnt + 1] = 1;
						route.push(make_pair(make_pair(ny, nx), make_pair(d + 1, cnt + 1)));
					}
				}
				else {
					visited[ny][nx][cnt] = 1;
					route.push(make_pair(make_pair(ny, nx), make_pair(d + 1, cnt)));
				}
			}
		}
	}
	return -1;
}

int main() {
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		map.push_back(s);
	}

	cout << BFS() << "\n";
	return 0;
}