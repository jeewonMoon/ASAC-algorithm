#include <iostream>
using namespace std;

int main() {
	int mushroom, sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> mushroom;
		if (sum + mushroom > 100) {
			if (sum + mushroom - 100 <= 100 - sum) {	//���簪�� ���Ѱ� ���� �� �۰ų� ����
				sum += mushroom;
				break;
			}
			else {
				break;
			}
		}
		sum += mushroom;
		if (sum == 100) break;
	}

	cout << sum << "\n";
	return 0;
}