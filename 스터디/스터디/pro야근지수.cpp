#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//���α׷��ӽ� �߱�����
//�켱���� ť�� �־ �ִ��� -> n��ŭ -1 -> ���� �۾��� �����ؼ� ans ���
long long solution(int n, vector<int> works) {
	priority_queue<int> pq(works.begin(), works.end());
	long long answer = 0;

	for (int i = 0; i < n; i++) {
		if (pq.top() <= 0) break;
		int tmp = pq.top();
		pq.pop();
		pq.push(tmp - 1);
	}

	while (!pq.empty()) {
		long long tmp = pq.top();
		answer += tmp*tmp;
		pq.pop();
	}

	return answer;
}