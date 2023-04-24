#include <string>
#include <vector>

using namespace std;
//dfs
//정수들을 더하고 빼서 타켓 넘버 만들기

int answer = 0;
void dfs (vector<int> num, int target, int sum, int idx){
    if (idx==num.size()) {  //다 돌았음
        if (sum==target){
            answer++;
        }
        return;
    }
    
    dfs(num, target, sum+num[idx], idx+1);  //더하기
    dfs(num, target, sum-num[idx], idx+1);  //빼기
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);
    
    return answer;
}