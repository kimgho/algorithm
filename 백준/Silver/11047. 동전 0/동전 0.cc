#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, ans = 0;
    vector<int> coin;
    cin >>
        n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        coin.push_back(x);
    }
    sort(coin.rbegin(), coin.rend());
    for (int i = 0; i < coin.size(); i++)
    {
        ans += k / coin[i];
        k = k % coin[i];
    }
    cout << ans;
    return 0;
}