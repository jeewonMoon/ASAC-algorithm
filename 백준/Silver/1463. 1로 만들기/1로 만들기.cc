#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 1 만드는 최소 연산 횟수
// 1. 3으로 나눠 떨어지면 3으로 나누기, 2. 2면 2로, 3. -1
// 3의 배수면 1, 3번 가능
// 2의 배수면 2, 3번
// 다 아니면 3번
// 6의 배수면 1, 2, 3 다 가능


int main() {
	int n;
	cin >> n;
	vector<int> dp(n+1);	//모든 연산 횟수 저장
	
	dp[1] = 0;	// 1일때는 연산 안해도 됨

	// 가능한 연산 중에 최소 횟수에 +1
	for (int i = 2; i <= n; i++) {
		if (i % 6 == 0) {
			dp[i] = min(dp[i / 3], dp[i / 2]) + 1;
		}
		else if (i % 3 == 0) {
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		}
		else if (i % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
	}

	cout << dp[n] << "\n";

	return 0;
}