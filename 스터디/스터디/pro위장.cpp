#include <string>
#include <vector>
#include<map>
using namespace std;

//각 의상 종류의 개수+1해서 곱한 다음 아무것도 안입는 경우 -1
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