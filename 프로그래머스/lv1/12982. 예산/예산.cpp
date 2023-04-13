#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
//구매할 때는 다 구매, 최대한 많은 부서의 물품 구매

int solution(vector<int> d, int budget) {
    int answer = 0, sum=0;
    sort(d.begin(), d.end());
    
    for (int n:d){
        sum+=n;
        if (sum<=budget) {
            answer++;
        }
        else break;
    }
    return answer;
}