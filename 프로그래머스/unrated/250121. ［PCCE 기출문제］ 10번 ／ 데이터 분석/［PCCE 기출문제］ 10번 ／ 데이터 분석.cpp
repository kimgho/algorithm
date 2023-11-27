#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int sortIdx =0;
bool compare(const vector<int> a, const vector<int> b) {
    return a[sortIdx] < b[sortIdx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<string> s = {"code","date","maximum","remain"};
    int idx =0;
    for(int i=0;i<4;i++){
        if(ext==s[i]){
            sortIdx = i;
        }
    }
    for(int i=0;i<data.size();i++){
        if(data[i][sortIdx]<val_ext)
            answer.push_back(data[i]);
    }
    for(int i=0;i<s.size();i++){
        if(sort_by==s[i]){
            sortIdx = i;
        }
    }
    sort(answer.begin(), answer.end(), compare);
    return answer;
}