#include <string>
#include <vector>

using namespace std;

// 던전 탐험-> 체력 <최소 소모 피로도> 이상만 탐험 가능, -<소모 피로도>
// 탐험할 수 있는 최대 던전 수
// dfs

vector<int> visited(8, 0);
int answer = 0;

void dfs(int cnt, int minHp, vector<vector<int>> dungeons) {
    if (cnt>answer) answer=cnt;
    
    for (int i=0;i<dungeons.size();i++) {
        if (!visited[i] && dungeons[i][0]<=minHp) {
            visited[i]=1;
            dfs(cnt+1, minHp-dungeons[i][1], dungeons);
            visited[i]=0;   // 방문 다시 리셋
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    dfs(0, k, dungeons);
    return answer;
}