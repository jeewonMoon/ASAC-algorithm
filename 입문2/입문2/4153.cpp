#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		int m = max({ a,b,c });
		if (m == a) {
			if (b * b + c * c == a * a) cout << "right" << endl;
			else cout << "wrong" << endl;
		}
		else if (m == b) {
			if (a * a + c * c == b * b) cout << "right" << endl;
			else cout << "wrong" << endl;
		}
		else {
			if (a * a + b * b == c * c) cout << "right" << endl;
			else cout << "wrong" << endl;
		}
	}

	return 0;
}