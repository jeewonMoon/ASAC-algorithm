#include<iostream>
#include<set>
using namespace std;

//서로 다른 나머지 찾기 -> 집합에 넣어서 집합원소개수 출력
int main() {
	int n;
	set<int> s;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		s.insert(n%42);
	}

	cout << s.size() << endl;

	return 0;
}