#include <iostream>
using namespace std;

//역순으로 검사
int main() {
	int n, flag=1;
	cin >> n;
	for (int i = n; i > 0; i--) {
		int tmp = i;
		flag = 1;
		while (tmp != 0) {
			if (tmp % 10 != 4 && tmp % 10 != 7) {
				flag = 0;
				break;
			}
			tmp /= 10;
		}
		if (flag) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}