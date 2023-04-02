#include <iostream>
#include <algorithm>
using namespace std;

//2명을 뺀 나머지 합이 100 -> o
int main() {
	int h[10] = { 0 };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> h[i];
		sum += h[i];
	}
	sort(h, h + 9);

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (h[i] + h[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) cout << h[k] << "\n";
				}
				return 0;
			}
		}
	}

	return 0;
}