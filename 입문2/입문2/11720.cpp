#include<iostream>
#include<string>
using namespace std;

int main() {
	int t, res = 0;
	string num;

	cin >> t;
	cin >> num;

	for (int i = 0; i < num.size(); i++) {
		res += num[i] - '0';
	}
	
	cout << res << endl;
	return 0;
}