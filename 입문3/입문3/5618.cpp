#include <iostream>
#include <set>
using namespace std;
// ��� �ռ����� �� ���� �����ٺ��� �۰ų� ���� ����� ���´�
// -> �� ���� �����ٺ��� ū ���� ���� �ʿ�x

int get_gcd(int a, int b) {		//�������� �ִ����� ���ϱ�
	int m = min(a, b);

	for (int i = m; i > 1; i--) {
		if (a % i == 0 && b % i == 0) return i;
	}
}

int main() {
	int n, gcd = 0;
	int a = 0, b = 0, c = 0;
	set<int> div;
	cin >> n;

	if (n == 2) {
		cin >> a >> b;
		gcd = get_gcd(a, b);
	}
	else {
		cin >> a >> b >> c;
		gcd = get_gcd(get_gcd(a, b), c);
	}

	//���
	for (int i = 1; i * i <= gcd; i++) {
		if (gcd % i == 0) {
			div.insert(i);
			div.insert(gcd / i);
		}
	}

	for (int i : div) {
		cout << i << "\n";
	}

	return 0;

}