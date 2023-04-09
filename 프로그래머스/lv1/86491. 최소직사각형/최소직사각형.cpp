#include <string>
#include <vector>

using namespace std;
//모든 명함을 수납(가로세로 돌려도 o)
//-> 짧은 애들 중에 최대 * 긴 애들 중에 최대
int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int small = 0, big = 0;

    for (int i = 0; i < sizes.size(); i++) {
        // w,h중에 큰 값이랑 big이랑 비교->더 큰 값을 big
        big = max(big, max(sizes[i][0], sizes[i][1]));
        // w,h중에 작은 값이랑 small이랑 비교->더 큰 값을 small
        small = max(small, min(sizes[i][0], sizes[i][1]));
    }
    answer = big * small;
    return answer;
}