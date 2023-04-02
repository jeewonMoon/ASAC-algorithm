#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	vector<int> mul;
	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		int a = i * n;
		int rvrs = 0, cnt = 0;

		//숫자 뒤집기
		string tmp = to_string(a);
		reverse(tmp.begin(), tmp.end());
		rvrs = atoi(tmp.c_str());

		mul.push_back(rvrs);
	}

	sort(mul.begin(), mul.end());

	cout << mul[k-1] << "\n";

	return 0;
}