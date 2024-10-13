#include <iostream>
#include <cstring> 
using namespace std;
#define io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int cnt[26];
int n;

int main() {
    io;
    cin >> n;

    for(int i = 0; i < n; i++) {
        memset(cnt, 0, sizeof(cnt)); 
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length()) {
            cout << "Impossible" << "\n";
            continue;
        }

        for (int j = 0; j < s1.length(); j++) {
            cnt[s1[j] - 'a']++;  
            cnt[s2[j] - 'a']--; 
        }

        bool possible = true;
        for (int j = 0; j < 26; j++) {
            if (cnt[j] != 0) {  
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "Possible" << "\n";
        } else {
            cout << "Impossible" << "\n";
        }
    }
    return 0;
}
