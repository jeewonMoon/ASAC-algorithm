#include<iostream>
#include<string>
using namespace std;

int main() {
	string s[8] = { "c=","c-","dz=", "d-","lj","nj","s=","z=" };
	string str;

	cin >> str;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < str.size(); j++) {	// ��ü �ܾ� ���� ���ϱ�
			if (str.find(s[i]) == string::npos) break;
			j = str.find(s[i]);
			str.replace(j, s[i].size(), " ");
		}
	}
	cout << str.size()<< "\n";
	return 0;
}