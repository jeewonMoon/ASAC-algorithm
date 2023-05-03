#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//start->1분 심사관 1명, end-> 제일 오래 걸리는 심사관, n명
long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    sort(times.begin(), times.end());
    
    long long start = 1;
    long long end = (long long)times[times.size()-1]*n;
    long long mid, cnt=0;
    
    while(start<=end){
        mid = (start+end)/2;
        cnt=0;  //mid 동안 심사할 수 있는 사람 수
        
        for (int i=0;i<times.size();i++){
            cnt+=mid/times[i];
        }
        
        if (cnt<n) {    //n명보다 적게 심사
            start=mid+1;
        }
        else { 
            if (mid<=end) answer=mid;   //end보다 mid가 작으면 최소가 될 수 o
            end=mid-1;
        }
    }
    
    return answer;
}