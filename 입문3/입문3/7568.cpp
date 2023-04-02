#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, w, h;
	vector<int> rank;
	vector<pair<int, int>> spec;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> w >> h;
		spec.push_back(make_pair(w, h));
	}

	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (spec[i].first < spec[j].first && spec[i].second < spec[j].second)
				cnt++;
		}
		rank.push_back(cnt);
	}

	for (int n : rank) {
		cout << n << " ";
	}

	return 0;
}