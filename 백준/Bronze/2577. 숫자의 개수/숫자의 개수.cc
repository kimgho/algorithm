#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0);

int main(){
    io;
    int a,b,c;
    cin >> a >> b >>c;
    string m = to_string(a* b *c);
    for(int i='0';i<='9';i++){
        cout << count(m.begin(),m.end(),i)<<"\n";
    }
    return 0;
}