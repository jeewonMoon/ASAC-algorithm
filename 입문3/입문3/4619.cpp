#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int b, n;

	while (1) {
		cin >> b >> n;
		int sub = 0;
		if (b == 0 && n == 0) break;

		if (b == 1) {
			cout << 1 << "\n";
			continue;
		}
		if (n == 1) {
			sub = b;
		}
		else if (n == 2) {
			double sq = sqrt(b);
			sub = round(sq);
		}
		else {
			for (int i = 1; i < b; i++) {
				if (pow(i, n) == b) {
					sub = i;
					break;
				}
				else if (pow(i, n) > b) {	//제곱수가 b를 넘어가면
					if (b - pow(i - 1, n) <= pow(i, n) - b) {	//전이 더 가까움
						sub = i - 1;
					}
					else sub = i;	//현재가 더 가까움 
					break;
				}
			}
		}
	cout << sub << "\n";

	}

	return 0;
}