#include <iostream>
using namespace std;

//�ִ� 100�� �� �� o -> 100�� �ٸ� ���̰� 100 -> 
// �� �̻��� ���� ���� �� x(�� �� �ִ� �ִ� �Ÿ� 100)
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