#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int c= 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            c=0;
            continue;
        }
        if(c % 2 == 0){
            if('a'<=s[i] && s[i] <= 'z')
                s[i] = s[i] - ('a'-'A');
        }
        if(c % 2 ==1){
            if('A'<=s[i]&& s[i]<='Z')
                s[i] = s[i] +('a'-'A');
        }
        c++;
    }
    answer = s;
    return answer;
}