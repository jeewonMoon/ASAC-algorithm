#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// unique(s,e): ���ӵ� �ߺ����� �� �ڷ� ������ ���� iterator ��ȯ
// aabbcb -> abcbcb -(erase)>abcb 
//unique, erase -> sort -> ���ӵȹ���? false
int main() {
	int n, cnt = 0;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		bool flag = true;
		
		str.erase(unique(str.begin(), str.end()), str.end());
		sort(str.begin(), str.end());

		for (int j = 0; j < str.size() - 1; j++) {
			if (str[j] == str[j + 1]) {
				flag = false;
				break;
			}
		}
		if (flag) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}