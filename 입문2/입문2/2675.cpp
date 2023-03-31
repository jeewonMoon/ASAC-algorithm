#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int t, r;
	string str;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r >> str;

		vector<char> res;
		for (int j = 0; j < str.size(); j++) {
			for (int k = 0; k < r; k++) {
				res.push_back(str[j]);
			}
		}

		for (char n : res) {
			cout << n;
		}
		cout << endl;
	}
	return 0;
}