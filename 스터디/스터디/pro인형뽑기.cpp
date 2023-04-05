#include<iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

// v[i][move] 0�� �ƴ� ������ i++
// st.top�̶� ���ؼ� ������ st.pop, ans+=2
// �ٸ��� st.push
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;

    for (int move:moves) {
		for (int i = 0; i < board.size(); i++) {    //row ������ŭ
            int now = board[i][move-1];

            if (now > 0) {  //��������
                board[i][move - 1] = 0; //���� ���� moves���� ���ְ�

                if (basket.empty()) {   //�ٱ��ϰ� ������� �ٷ� �ֱ�
                    basket.push(now);
                    break;
                }

                if (now == basket.top()) {  //�Ⱥ���� �ٱ��� �� �� �����̶� ������ pop, ����Ƚ��+2
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