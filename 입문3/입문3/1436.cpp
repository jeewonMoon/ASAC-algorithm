#include <iostream>
#include <string>
using namespace std;

//666���� +1�ϸ鼭 666�� �������� cnt++
//cnt==n ��� ��
int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 666;; i++) {
		string s = to_string(i);
		if (s.find("666") != string::npos) cnt++;

		if (cnt == n) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}