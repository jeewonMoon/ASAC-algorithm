#include <string>
#include <vector>
#include <iostream>

using namespace std;

//스킬 중복 x

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    vector<char> skillChk;
    
    for (const auto& s : skill_trees) {
        for (int i=0;i<s.length();i++) {
            if (skill.find(s[i]) != string::npos) { //선행스킬순서에 있는 문자
                skillChk.push_back(s[i]);
            }
        }
        int flag=1;
        for (int i=0;i<skillChk.size();i++) {
            if (skillChk[i]!=skill[i]) {    //순서가 다르면 break
                flag=0;
                break;
            }
        }
        if (flag) answer++;
        skillChk.clear();
    }
    
    return answer;
}