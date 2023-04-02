#include <iostream>
using namespace std;

int main() {
	int num[5] = { 0 };
	int min = -1, cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (min == -1 || num[i] < min) min = num[i];
	}

	while (1) {
		cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (min % num[i] == 0) {
				cnt++;
				if (cnt >= 3) {
					cout << min << "\n";
					return 0;
				}
			}
		}
		min++;
	}
	return 0;
}