#include <string>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;

    for (int move:moves) {
		for (int i = 0; i < board.size(); i++) {    //row 개수만큼
            int now = board[i][move-1];

            if (now > 0) {
                board[i][move - 1] = 0;

                if (basket.empty()) {
                    basket.push(now);
                    break;
                }

                if (now == basket.top()) {
                    basket.pop();
                    answer += 2;
                }
                else basket.push(now);

                break;
            }
		}
    }
    
    return answer;
}