#include<iostream>
using namespace std;

// 300, 60, 10 sec
int main() {
	int t;
	int sec[3] = { 0 };
	cin >> t;
	if (t % 10 != 0) cout << -1 << "\n";
	else {
		sec[0] = t / 300;
		t -= 300 * sec[0];
		sec[1] = t / 60;
		t -= 60 * sec[1];
		sec[2] = t / 10;

		cout << sec[0] << " " << sec[1] << " " << sec[2] << "\n";
	}

	return 0;
}