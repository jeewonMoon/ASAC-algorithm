#include<iostream>
using namespace std;

// ~01ȣ -> ~02ȣ -> ~03ȣ ....

int main() {
	int t, w, h, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) cout << h * 100 + n / h << endl;
		else cout << n % h * 100 + n / h + 1 << endl;
	}
}