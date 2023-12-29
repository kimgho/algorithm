#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

long long solution(long long n) {
    long long answer =0;
    vector<int> ans;
    while(n>0){
        ans.push_back(n%10);
        n/=10;
    }
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++){
        answer =answer * 10 + ans[i];
    }
    return answer;
}