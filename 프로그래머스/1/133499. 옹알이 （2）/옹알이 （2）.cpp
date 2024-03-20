#include <string>
#include <vector>
#include <regex>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(auto s : babbling){
        s = regex_replace(s,regex("aya"),"1");
        s = regex_replace(s,regex("ye"),"2");
        s = regex_replace(s,regex("woo"),"3");
        s = regex_replace(s,regex("ma"),"4");
        bool flag = true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] || s[i] < '1' || s[i]> '4'){
                flag = false;
                break;
            }
        }
        if(s.back() < '1' || s.back()>'4')
            flag = false;
        if(flag) answer++;
    }
    return answer;
}