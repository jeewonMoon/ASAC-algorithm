#include <iostream>
#include <string>
using namespace std;

//666부터 +1하면서 666이 들어가있으면 cnt++
//cnt==n 출력 끝
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