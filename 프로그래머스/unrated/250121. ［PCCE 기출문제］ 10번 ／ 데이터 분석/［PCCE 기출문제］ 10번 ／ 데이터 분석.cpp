#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const vector<int>& a, const vector<int>& b, int idx) {
    return a[idx] < b[idx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<string> s = {"code","date","maximum","remain"};
    int extIdx = 0,sortIdx = 0;
    for(int i=0;i<4;i++){
        if(ext==s[i]){
            extIdx = i;
        }
        if(sort_by ==s[i]){
            sortIdx =i;
        }
    }
    int met = sortIdx;
    for(int i=0;i<data.size();i++){
        if(data[i][extIdx]<val_ext)
            answer.push_back(data[i]);
    }
    sort(answer.begin(), answer.end(), [met](const vector<int>& a, const vector<int>& b) {
        return compare(a, b, met);
    });
    return answer;
}