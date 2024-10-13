#include <iostream>
#include <cmath>
using namespace std;
#define io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int n,k,cnt=0;
int main(){
    io;
    cin >> n >> k;
    int boy[7] = {0};
    int girl[7] = {0};
    for(int i=0;i<n;i++){
        int s,y;
        cin >> s >> y;
        if(s==0)girl[y]++;
        else boy[y]++;
    }
    for(int i=1;i<=6;i++){
        if(boy[i] > 0){
            cnt +=ceil((double)boy[i]/k);
        }
        if(girl[i]>0){
            cnt+=ceil((double)girl[i]/k);
        }
    }
    cout << cnt << "";
    return 0;
}