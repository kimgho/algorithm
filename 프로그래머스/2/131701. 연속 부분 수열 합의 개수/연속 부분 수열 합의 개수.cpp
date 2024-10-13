#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    set<int>s;
    for(int i=1;i<=elements.size();++i){
        int sum =0;
        for(int j=0;j<i;++j){
            sum+=elements[j];
        }
        s.insert(sum);
        for(int j=1;j<elements.size();++j){
            sum = sum- elements[j-1] + elements[(j+i-1)%elements.size()];
            s.insert(sum);
        }
    }
    return s.size();
    }