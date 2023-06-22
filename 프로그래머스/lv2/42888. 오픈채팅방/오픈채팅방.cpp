#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;
// 최종 닉네임으로 기록 출력
// 상태-id / id-닉네임 각 vector, map에 저장

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string, string>> status;    // 상태, id
    unordered_map<string, string> name; //id-닉네임
    
    for (string str : record) {
        vector<string> split;
        stringstream stream;
        stream.str(str);    //공백 기준으로 문자열 자르기
        string tmp;
        
        while(stream >> tmp) {
            split.push_back(tmp);   //벡터에 단어 삽입
        }
        
        status.push_back(make_pair(split[0], split[1]));    //상태, id
        if (split[0]!="Leave") {  //leave는 닉네임x, leave 아니면 닉네임 갱신
            name[split[1]]=split[2];
        }
    }
    
    for (auto it : status) {
        if (it.first=="Change") continue;
        if (it.first=="Enter") {
            answer.push_back(name[it.second]+"님이 들어왔습니다.");
        }
        else {
            answer.push_back(name[it.second]+"님이 나갔습니다.");
        }
    }
    
    return answer;
}