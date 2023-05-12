#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//연속 3개x
//마지막은 무조건 밟음
int main() {
	int n;
	cin >> n;
	vector<int> dp(n+1);	// 점수
	vector<int> stair;	// 계단들 점수

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		stair.push_back(a);
	}

	dp[1] = stair[0];
	dp[2] = stair[0] + stair[1];
	if (n >= 3) {
		for (int i = 3; i <= n; i++) {
			// 두칸-건너뛰고-마지막, 한칸-건너뛰고-마지막 두칸
			dp[i] = max(dp[i - 3]+stair[i - 2]+stair[i-1], dp[i-2]+stair[i-1]);
		}
	}

	cout << dp[n] << "\n";

	return 0;
}