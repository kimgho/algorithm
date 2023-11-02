#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pcnt = 0, ycnt =0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='p'||s.at(i)=='P'){
            pcnt++;
        }
        else if(s.at(i)=='y'||s.at(i)=='Y'){
            ycnt++;
        }
        else{
            continue;
        }
    }
    if(pcnt==ycnt )answer = true;
    else answer =false;
    return answer;
}