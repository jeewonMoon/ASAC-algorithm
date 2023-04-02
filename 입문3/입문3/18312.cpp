#include <iostream>
using namespace std;

int main() {
	int n, k, cnt = 0;
	cin >> n >> k;

	for (int i = 0; i <= n; i++) {	//hour
		if (i % 10 == k || i / 10 == k) {
			cnt += 3600;
			continue;
		}
		for (int j = 0; j < 60; j++) {	//min
			if (j % 10 == k || j / 10 == k) {
				cnt += 60;
				continue;
			}
			for (int r = 0; r < 60; r++) {	//sec
				if (r % 10 == k || r / 10 == k) {
					cnt++;
				}
			}
		}
	}

	cout << cnt << "\n";
	return 0;
}