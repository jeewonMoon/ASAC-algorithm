#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int cnt[10] = { 0 };
	cin >> a >> b >> c;

	int num = a * b * c;

	while(1) {
		if (num == 0) break;
		int i = num % 10;
		cnt[i]++;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << endl;
	}

	return 0;
}