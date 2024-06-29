#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int idx1=0,idx2=0,idxg =0;
    while(true){
        if(idxg==goal.size())
            return "Yes";
        else{
            if(goal[idxg]==cards1[idx1]){
                idxg++;
                idx1++;
            }
            else if(goal[idxg]==cards2[idx2]){
                idxg++;
                idx2++;
            }
            else{
                return "No";
                break;
            }
        }
    }
}