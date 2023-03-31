#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> arr;
	int n;
	
	for (int i = 0; i < 9; i++) {
		cin >> n;
		arr.push_back(n);
	}

	cout << *max_element(arr.begin(), arr.end()) << endl;
	cout << max_element(arr.begin(), arr.end()) - arr.begin()+1 << endl;

	return 0;
}