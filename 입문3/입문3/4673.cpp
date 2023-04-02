#include <iostream>
using namespace std;

int self_num(int n) {
	int sum = n;
	while (n!=0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	bool num[10001] = {false};

	for (int i = 1; i <= 10000; i++) {
		int res = self_num(i);
		if (res <= 10000) num[res] = true;
	}

	for (int i = 1; i <= 10000; i++) {
		if (!num[i]) cout << i << "\n";		
	}
	return 0;
}