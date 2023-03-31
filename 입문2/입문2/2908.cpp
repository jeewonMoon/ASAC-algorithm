#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b, ra = 0, rb = 0;
	cin >> a >> b;

	int cnt = 2;
	while (cnt>=0) {
		ra += a % 10 * pow(10, cnt);
		rb += b % 10 * pow(10, cnt);

		a /= 10;
		b /= 10;

		cnt--;
	}

	cout << max(ra, rb) << endl;

	return 0;
}