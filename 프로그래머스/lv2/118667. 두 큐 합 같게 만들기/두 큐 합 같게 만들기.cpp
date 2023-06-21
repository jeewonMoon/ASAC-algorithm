#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

//큐의 원소 합을 같게 만들기 위해 필요한 작업의 최소 횟수
//없으면 -1

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0, size=queue1.size();
    int idx1=0,idx2=0;
    long sum1, sum2;
    
    sum1=accumulate(queue1.begin(), queue1.end(), 0);
    sum2=accumulate(queue2.begin(), queue2.end(), 0);
    
    if ((sum1+sum2)%2!=0) return -1;    //홀수는 2로 나눠떨어지지x
    
    while (answer<=size*3) {
        if (sum1==sum2) return answer;
        if (sum1<sum2) {
            long num=queue2[idx2];
            // queue2.erase(queue2.begin());    // erase 시간초과
            queue1.push_back(num);
            
            sum1+=num;
            sum2-=num;
            
            idx2++;
            answer++;
        }
        else {
            long num=queue1[idx1];
            queue2.push_back(num);
            
            sum1-=num;
            sum2+=num;
            
            idx1++;
            answer++;
        }
    }
    
    return -1;
}