#include <string>
#include <vector>

using namespace std;

bool isPrime(int x){
    if(x<2)return false;
    for(int i=2;i * i<=x;i++){
        if(x % i ==0)return false;
    }
    return true;
}

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        if(isPrime(i)) answer++;
    }
    return answer;
}