#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i=1;i<food.size();i++){
        while(food[i]>1){
            answer+=i+'0';
            food[i]-=2;
        }
    }
    string rev = answer;
    sort(rev.rbegin(),rev.rend());
    return answer + "0" + rev;
}