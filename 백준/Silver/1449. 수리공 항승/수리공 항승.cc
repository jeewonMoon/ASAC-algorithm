#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, l, cnt = 0;
	vector<int> hole;
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		hole.push_back(a);
	}

	sort(hole.begin(), hole.end());
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		if (hole[i] <= tmp) continue;	//이미 가려진 구멍
		else tmp = hole[i];		//가려지지 않은 구멍으로 tmp 이동
		cnt++;
		tmp += l-1;		//현재 포함 l개 가려지니까 +(l-1)
	}

	cout << cnt << "\n";

	return 0;
}