#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a,int b);
int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i=1;i<arr.size();i++){
        int k = gcd(answer,arr[i]);
        int lcm = answer * arr[i] / k;
        answer =lcm;
    }
    return answer;
}
int gcd(int a,int b){
    int big = max(a,b);
    int small = min(a,b);
    while(big%small !=0){
        int r = big%small;
        big = small;
        small= r;
    }
    return small;
}