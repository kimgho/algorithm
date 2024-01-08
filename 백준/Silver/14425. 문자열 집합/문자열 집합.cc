#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string, bool> mp;
    int n, m, cnt = 0;
    cin >> n >> m;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        mp.insert(pair<string, bool>(str, true));
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (mp[str] == true)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}