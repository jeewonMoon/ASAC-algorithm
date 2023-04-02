#include <iostream>
using namespace std;

//최대 100번 뛸 수 o -> 100번 뛰면 차이가 100 -> 
// 그 이상은 절대 만날 수 x(뛸 수 있는 최대 거리 100)
int main() {
	int d1, d2, s1, s2;
	cin >> d1 >> d2 >> s1 >> s2;

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (s1 + d1 * i == s2 + d2 * j) {
				cout << s1 + d1 * i << "\n";
				return 0;
			}
		}
	}
	cout << -1 << "\n";
	return 0;
}