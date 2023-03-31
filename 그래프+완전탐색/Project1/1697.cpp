#include <iostream>
#include <queue>
using namespace std;

bool valid(int n) {
	return n < 0 || n > 100000;
}

int main() {
	int n, k;
	bool chk[100001] = {false};
	queue<pair<int, int>> q;

	cin >> n >> k;

	chk[n] = true;
	q.push(make_pair(n, 0));
	while (!q.empty()) {
		int now = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if (now == k) {	// find
			cout << cnt << endl;
			break;
		}

		for (int nxt : {now - 1, now + 1, now * 2}) {
			if (valid(nxt)) continue;	//범위 벗어나거나
			if (chk[nxt]) continue;		//이미 방문
			q.push(make_pair(nxt, cnt+1));
			chk[nxt] = true;
		}

	}
	return 0;
}