#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> card;
	int min = m;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		card.push_back(a);
	}

	int ans = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum == m) {
					cout << sum << "\n";
					return 0;
				}
				else if (m >= sum && m - sum < min) {	//차가 가장 적게
					min = m - sum;
					ans = sum;
				}
			}
		}
	}
	cout << ans << "\n";
}