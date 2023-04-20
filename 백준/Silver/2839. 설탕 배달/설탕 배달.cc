#include<iostream>
using namespace std;

//5를 최대한 사용
//3씩 빼면서 5로 나눠떨어지는지 확인
int main() {
	int n, cnt = 0;
	cin >> n;

	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			cout << cnt << "\n";
			return 0;
		}
		n -= 3;
		cnt++;
	}

	cout << -1 << "\n";

	return 0;
}