#include <string>
#include <vector>
#include<iostream>

using namespace std;

//3자 이상 15자 이하
//알파벳 소문자, 숫자, -, _, .(처음과 끝x, 연속x)

string solution(string new_id) {
    string answer = "";
    int flag=0;
    
    // 처음과 끝 .이면 제거
    if (new_id.front()=='.') new_id.substr(1, new_id.length()-1);
    if (new_id.back()=='.') new_id.pop_back();
    
    int idLen = new_id.length();
    for (int i=0;i<idLen;i++) {
        if (answer.length()==15) {
            if (answer.back()=='.') answer.pop_back();
            break;
        }
        if (new_id[i]>='A' && new_id[i]<='Z') { //대문자->소문자
            new_id[i]+=32;
        }
        if (new_id[i]>='a' && new_id[i]<='z') { //소문자
            answer.push_back(new_id[i]);
            flag=1;
            continue;
        }
        if (new_id[i]>='0' && new_id[i]<='9') { //숫자
            answer.push_back(new_id[i]);
            flag=1;
            continue;
        }
        if (new_id[i]=='-' || new_id[i]=='_') { //-, _, .
            answer.push_back(new_id[i]);
            flag=1;
            continue;
        }
        if(new_id[i]=='.') {
            if (flag!=0 && !answer.empty()) answer.push_back('.');
            flag=0;
            continue;
        }
    }
    
    // 처음과 끝 .이면 제거
    // while(true) {
    //     if (answer.front()!='.') break;
    //     answer.substr(1, answer.length()-1);
    // }
    while(true) {
        if (answer.back()!='.') break;
        answer.pop_back();
    }
    
    if (answer.empty()) answer.push_back('a');
    if (answer.length()<=2) {
        char last=answer.back();
        while (true) {
            if (answer.length()>=3) break;
            answer.push_back(last);
        }
    }
    
    return answer;
}