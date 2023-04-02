#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;

	for (int i = 0; i < t; i++){
		int cnt = 0;
		cin >> n >> m;

		for (int j = n; j <= m; j++) {
			string s = to_string(j);
			for (int k = 0; k < s.size(); k++) {
				if (s[k] == '0') cnt++;
			}
		}

		cout << cnt << "\n";
	}
	return 0;
}