#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string board[51] = { "" };

int count(int n, int m) {
	int cntw = 0, cntb = 0;		//ù���� W, B

	for (int i = n; i < n+8; i++) {
		for (int j = m; j < m+8; j++) {
			if ((i+j) % 2 == 0) {	//�� �� ¦��->�� ���� ù ���ڶ� ���ƾ���
				if (board[i][j] == 'W') cntb++;
				else cntw++;
			}
			else {
				if (board[i][j] == 'W') cntw++;
				else cntb++;
			}
		}
	}
	return min(cntw, cntb);
}

int main() {
	int n, m, t;
	cin >> n >> m;
	int cnt = n * m;

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			t = count(i, j);

			if (cnt > t) cnt = t;
		}
	}
	
	cout << cnt << "\n";

	return 0;
}