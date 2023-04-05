#include<iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

// v[i][move] 0이 아닐 때까지 i++
// st.top이랑 비교해서 같으면 st.pop, ans+=2
// 다르면 st.push
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;

    for (int move:moves) {
		for (int i = 0; i < board.size(); i++) {    //row 개수만큼
            int now = board[i][move-1];

            if (now > 0) {  //인형잡음
                board[i][move - 1] = 0; //잡은 인형 moves에서 없애고

                if (basket.empty()) {   //바구니가 비었으면 바로 넣기
                    basket.push(now);
                    break;
                }

                if (now == basket.top()) {  //안비었고 바구니 맨 위 인형이랑 같으면 pop, 터진횟수+2
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

int main() {
    vector<vector<int>> board = { {0, 0, 0, 0, 0}, { 0, 0, 1, 0, 3 }, { 0, 2, 5, 0, 1}, { 4, 2, 4, 4, 2 }, { 3, 5, 1, 3, 1} };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };

    cout << solution(board, moves) << endl;

    return 0;
}