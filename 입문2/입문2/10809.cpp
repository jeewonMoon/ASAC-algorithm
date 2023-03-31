#include<iostream>
#include<string>
using namespace std;

// a-97=0
int main() {
	string s;
	int location[26] = { -1 };
	cin >> s;

	for (char a = 'a'; a <= 'z'; a++) {
		if (s.find(a) != string::npos) {	// exist
			location[a - 97] = s.find(a);
		}
		else {
			location[a - 97] = -1;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << location[i] << " ";
	}

	return 0;
}