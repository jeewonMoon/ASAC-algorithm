#include <iostream>
using namespace std;

//각 자리수의 차가 일정한 수의 개수 구하기
int main() {
	int n, cnt = 0, sub = 0;
	cin >> n;

	if (n < 100) cnt = n;
	else {
		cnt = 99;
		for (int i = 100; i <= n; i++) {
			int tmp = i, now = 0, flag = 0;

			sub = tmp / 10 % 10 - tmp % 10;
			tmp /= 10;
			while (tmp > 9) {
				now = tmp / 10 % 10 - tmp % 10;
				tmp /= 10;
				if (now == sub) flag = 1;
				else {
					flag = 0;
					break;
				}
			}
			if (flag) cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}