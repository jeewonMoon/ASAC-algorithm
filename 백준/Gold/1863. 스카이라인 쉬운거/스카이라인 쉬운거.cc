#include<iostream>
#include<stack>
using namespace std;

int main() {
	int cnt = 0, n, m = 0;
	cin >> n;
	stack<int> building;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		
		while (!building.empty() && building.top() > b) {
			cnt++;
			building.pop();
		}
		if (building.empty() || building.top() != b) {
			building.push(b);
		}
	}

	while (!building.empty()) {
		if (building.top() > 0) cnt++;
		building.pop();
	}
	
	cout << cnt << "\n";
	return 0;
}