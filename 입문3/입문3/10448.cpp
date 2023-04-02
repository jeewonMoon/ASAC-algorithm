#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	vector<int> eureka;
	for (int i = 1;; i++) {	//»ï°¢¼ö
		if (i * (i + 1) / 2 < 1000) eureka.push_back(i * (i + 1) / 2);
		else break;
	}

	for (int i = 0; i < t; i++) {
		cin >> n;
		int sum = 0;
		bool flag = false;

		for (int i = 0; i < eureka.size(); i++) {
			for (int j = 0; j < eureka.size(); j++) {
				for (int k = 0; k < eureka.size(); k++) {
					sum = eureka[i] + eureka[j] + eureka[k];
					if (sum == n) {
						cout << 1 << "\n";
						flag = true;
						break;
					}
				}
				if (flag) break;
			}
			if (flag) break;
		}
		if (!flag) cout << 0 << "\n";
	}
	return 0;
}