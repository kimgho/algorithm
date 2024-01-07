#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<int, int> mp;
    int n, m;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        mp[num]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        cout << mp[num] << ' ';
    }
    return 0;
}