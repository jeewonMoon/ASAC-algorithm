#include<iostream>
#include<algorithm>
using namespace std;

// n: 도시개수, m: 버스 개수
// 시작 도시, 도착 도시, 비용
//시작 도시와 도착 도시를 연결하는 노선은 하나가 아닐 수 있다.

int main() {
	const int INF = 0x3f3f3f3f;
	int n, m;
	int graph[101][101];

	cin >> n >> m;

	//INF로 초기화
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) graph[i][j] = 0;	//자기자신은 0
			else graph[i][j] = INF;
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		//노선이 여러개일 수도 있으니까 그중에서 최소거리를 넣어줘야 됨
		graph[a][b] = min(graph[a][b], c);
	}

	// 플로이드 알고리즘
	for (int i = 1; i <= n; i++) {
		for (int s = 1; s <= n; s++) {
			for (int e = 1; e <= n; e++) {
				// 현재값보다 시작과 도착 사이의 정점들의 거리를 
				// 더한 값이 더 작으면 갱신 -> n번동안 반복
				graph[s][e] = min(graph[s][e], graph[s][i] + graph[i][e]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (graph[i][j] == INF) cout << "0 ";	//갈 수x
			else cout << graph[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}