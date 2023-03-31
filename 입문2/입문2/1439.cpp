#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt0 = 0, cnt1 = 0, flag = -1;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == '0') {
			if (flag != 0) cnt0++;	//¿¬¼Óx cnt++
			flag = 0;
		}
		else {
			if (flag != 1) cnt1++;
			flag = 1;
		}
	}

	cout << min(cnt0, cnt1) << "\n";
	return 0;
}