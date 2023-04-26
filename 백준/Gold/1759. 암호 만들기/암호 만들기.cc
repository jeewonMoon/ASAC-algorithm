#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

//모음 1개, 자음 2개 이상인 길이가 l인 단어
//알파벳순 출력

int l, c;
vector<char> alphabet;
string str;

bool valid() {
	int vowel = 0;

	for (int i = 0; i < l; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vowel++;
		}
	}
	return vowel >= 1 && l - vowel >= 2;
}

void dfs(int idx) {
	if (str.size() == l) {	//단어완성
		if (valid()) {	//모음, 자음 개수 조건에 맞으면
			cout << str << "\n";
			return;
		}
	}

	for (int i = idx; i < c; i++) {
		str.push_back(alphabet[i]);
		dfs(i + 1);
		str.pop_back();
	}
	return;
}

int main() {
	cin >> l >> c;

	for (int i = 0; i < c; i++) {
		char c;
		cin >> c;
		alphabet.push_back(c);
	}

	sort(alphabet.begin(), alphabet.end());

	dfs(0);

	return 0;
}