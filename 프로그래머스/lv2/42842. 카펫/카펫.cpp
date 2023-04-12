#include <string>
#include <vector>

using namespace std;
//가로>=세로
//가로= 노랑/i(1~), 세로=노랑/가로
//(가로+2) * (세로+2) = 노랑+갈색이면 정답
vector<int> solution(int brown, int yellow) {
    vector<int> answer; //[가로, 세로]
    double v=0,h=0;    //vertical, horizontal
    for(int i=1;i<=yellow;i++){
        h=yellow/i;
        v=yellow/h;
        
        if (h * v != yellow) continue;  //yellow의 약수가x
        if ((h + 2) * (v + 2) == (brown + yellow)) {
            answer.push_back(h + 2);
            answer.push_back(v + 2);
            break;
        }
    }
    return answer;
}