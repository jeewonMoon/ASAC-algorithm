#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 0, sum = 0;
	cin >> n;
	int tmp = n;

	while (tmp != 0) {
		tmp /= 10;
		cnt++;
	}

	for (int i = n - cnt * 9; i <= n; i++) {	//자리수*9: 생성자가 가장 큰 경우
		tmp = i;
		sum = 0;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}

		if (i + sum == n) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";

	return 0;
}