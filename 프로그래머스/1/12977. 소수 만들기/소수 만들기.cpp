#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int x){
    if(x <2) return false;
    for(int i=2;i * i <=x;i++){
        if(x %i==0)return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    for(int i=0;i<nums.size();i++){
        int sum =0;
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                sum = nums[i] + nums[j] + nums[k];
                if(isPrime(sum))answer++;
            }
        }
        
    }

    return answer;
}