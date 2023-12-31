#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char c = s.at(i);
        if(c=='(')
            st.push(c);
        else if(c==')'){
            if(!st.empty()){
                st.pop();
            }
            else{
                st.push(')');
            }
        }
    }
    if(!st.empty()) answer =false;
    return answer;
}