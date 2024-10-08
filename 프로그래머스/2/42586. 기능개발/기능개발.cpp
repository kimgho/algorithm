#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int>q;
    int size = speeds.size();
    for(int i=0;i<size;i++){
        q.push(i);
    }
    while(!q.empty()){
        int days =0;
        for(int i=0;i<size;i++){
            progresses[i] +=speeds[i];
            while(!q.empty() && progresses[q.front()]>=100){
                days++;
                q.pop();
            }
        }
        if(days!=0){
            answer.push_back(days);
        }
    }
    return answer;
}