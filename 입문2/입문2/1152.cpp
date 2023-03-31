#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	string str;
	int cnt = 1;
	getline(cin, str);

	if (str == " ") cnt = 0;
	else {
		for (int i = 0; i < str.size(); i++) {
			if (i == 0 && isspace(str[i]) || i == str.size() - 1 && isspace(str[i])) continue;
			if (isspace(str[i])) cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}