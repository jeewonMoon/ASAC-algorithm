#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// unique(s,e): 연속된 중복값을 맨 뒤로 보내고 시작 iterator 반환
// aabbcb -> abcbcb -(erase)>abcb 
//unique, erase -> sort -> 연속된문자? false
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