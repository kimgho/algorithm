#include <iostream>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    io;
    int n, m, ans = 0;
    vector<int> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int left = 0, right = 0, sum = a[0];
    while (right < n)
    {
        if (sum == m)
        {
            ans++;
            sum += a[++right];
        }
        else if (sum < m)
        {
            sum += a[++right];
        }
        else
        {
            sum -= a[left++];
        }
    }
    cout << ans;
    return 0;
}