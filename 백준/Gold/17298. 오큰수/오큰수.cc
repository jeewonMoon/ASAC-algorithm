#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//오큰수: n의 오른쪽에서 n보다 큰 수 중 제일 왼쪽 수
//오른쪽으로 한 칸씩 가면서 크기 비교
// -> 시간초과 -> 입력과 동시에 비교해야함
//스택써야됨
//스택이 비었으면 일단 인덱스 push
//안비었으면 v[top]이랑 비교 n이 더 크면 작을 때까지 pop, v[top]=n
int main() {
	int n;
	vector<int> v;
	stack<int> st;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);

		while (1) {
			if (st.empty()) {
				st.push(i);
				break;
			}
			else {
				if (a > v.at(st.top())) {
					v[st.top()] = a;
					st.pop();
				}
				else {
					st.push(i);
					break;
				}
			}
		}
	}

	while (!st.empty()) {
		v[st.top()] = -1;
		st.pop();
	}

	for (int n : v) {
		cout << n << " ";
	}

	//for (int i = 0; i < n; i++) {
	//	int flag = 0;
	//	for (int j = i + 1; j < n; j++) {
	//		if (v[i] < v[j]) {
	//			cout << v[j] << " ";
	//			flag = 1;
	//			break;
	//		}
	//	}
	//	if (!flag) cout << -1 << "\n";	//오큰수 x
	//}
	return 0;
}