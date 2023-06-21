#include<iostream>
#include<algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

// 가능한 제재아이디 목록의 수 출력
// 목록에 제재아이디 중복x
// dfs?
// banned 기준으로 user-id 비교
// 1. 길이 2. * 제외 문자, 위치 같은지
// string에 유저아이디 정렬해서 넣고 set에 넣어서 중복제거

vector<string> bi, ui;
bool visit[9]={false};
set<string> ansList;
vector<string> id;
string tmp="";

bool check(string ban, string user) {
    if (ban.length()==user.length()) {  //길이 같음
        for (int i=0;i<ban.length();i++) {
            if (ban[i]=='*' || ban[i]==user[i]) continue;
            return false;   //*도 아닌데 문자 다름
        }
    }
    else return false;  //길이 다름
    
    return true;
}

void dfs(int idx) {
    if (idx==bi.size()) {
        vector<string> copy(id);
        sort(copy.begin(),copy.end());
        
        for (string s : copy) {
            tmp.append(s);
        }
        ansList.insert(tmp);
        tmp.clear();
        return;
    }
    
    for (int i=0;i<ui.size();i++) {
        if (!visit[i] && check(bi[idx], ui[i])){
            visit[i]=true;
            id.push_back(ui[i]);
            dfs(idx+1);
            //다시 리셋
            visit[i]=false;
            id.pop_back();
        }
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    
    bi=banned_id;
    ui=user_id;
    
    dfs(0);
    
    answer=ansList.size();
    return answer;
}