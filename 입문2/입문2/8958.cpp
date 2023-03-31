#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string quiz;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int score = 0, add = 1;
		int flag = 5;	//o->0, x->1

		cin >> quiz;
		for (int j = 0; j < quiz.size(); j++) {
			if (quiz[j] == 'O') {
				if (flag == 0) add++;
				score += add;
				flag = 0;
			}
			else {
				flag = 1;
				add = 1;
			}
		}
		cout << score << endl;
	}
	return 0;
}