#include <string>
#include <vector>
#include <regex>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string>vc = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string str=s;
    for(int i=0;i<vc.size();i++){
        string a(std::to_string(i));
        str = regex_replace(str,regex(vc[i]),a);
    }
    answer=stoi(str);
    
    return answer;
}