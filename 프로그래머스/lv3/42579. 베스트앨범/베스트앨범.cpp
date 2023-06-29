#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

// 재생횟수 많은 장르부터
// 장르에서 재생횟수 많은 인덱스
// 같으면 고유번호 인덱스 낮은 순
// 노래는 최대2개

static bool comp(pair<string, int>& a, pair<string, int>& b) {
    return a.second>b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> countsTmp;
    vector<pair<string, int>> counts;
    
    for (int i=0;i<genres.size();i++) {
        countsTmp[genres[i]]=countsTmp[genres[i]]+plays[i];
    }
    
    for (const auto& v:countsTmp) {
        counts.emplace_back(v);
    }
    
    sort(counts.begin(), counts.end(), comp);
    
    for (int i=0; i<counts.size();i++) {
        multimap<int, int, greater<int>> genreMap;
        for (int j=0;j<plays.size();j++) {  //카테고리별로 정렬
            if (counts[i].first==genres[j]) {
                genreMap.insert(make_pair(plays[j], j));
            }
        }
        
        int cnt=0;
        for(const auto& v:genreMap) {
            answer.push_back(v.second);
            cnt++;
            if (cnt>=2) break;
        }
        
    }
    
    return answer;
}