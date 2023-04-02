#include <iostream>
#include <set>
using namespace std;

int get_gcd(int a, int b) {
	for (int i = min(a, b); i >= 1; i--) {
		if (a % i == 0 && b % i == 0) return i;
	}
}
//gcd
int main() {
	int a, b;
	cin >> a >> b;
	int gcd = get_gcd(a, b);
	set<int> div;

	for (int i = 1; i * i <= gcd; i++) {
		if (gcd % i == 0) {
			div.insert(i);
			div.insert(gcd / i);
		}
	}

	for (int n : div) {
		cout << n << " " << a / n << " " << b / n << "\n";
	}

	return 0;
}