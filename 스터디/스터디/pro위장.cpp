#include <string>
#include <vector>
#include<map>
using namespace std;

//�� �ǻ� ������ ����+1�ؼ� ���� ���� �ƹ��͵� ���Դ� ��� -1
int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> ot;

    for (int i = 0; i < clothes.size(); i++) {
        ot[clothes[i][1]]++;
    }

    for (auto it = ot.begin(); it != ot.end(); it++) {
        answer *= it->second + 1;
    }

    return answer - 1;
}