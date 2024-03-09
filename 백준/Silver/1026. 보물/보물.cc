#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n, res = 0;
vector<int> a, b;
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        b.push_back(k);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }
    cout << res;
    return 0;
}