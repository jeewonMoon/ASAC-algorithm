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
				else if (pow(i, n) > b) {	//�������� b�� �Ѿ��
					if (b - pow(i - 1, n) <= pow(i, n) - b) {	//���� �� �����
						sub = i - 1;
					}
					else sub = i;	//���簡 �� ����� 
					break;
				}
			}
		}
	cout << sub << "\n";

	}

	return 0;
}