#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//프로그래머스 야근지수
//우선순위 큐에 넣어서 최대힙 -> n만큼 -1 -> 남은 작업량 제곱해서 ans 출력
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