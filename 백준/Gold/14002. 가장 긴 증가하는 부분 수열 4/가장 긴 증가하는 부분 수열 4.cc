#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n, ans = 1;
int arr[1001];
int dp[1001];
int vc[1001];
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
    int lon = 0, idx;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > lon)
        {
            lon = dp[i];
            idx = i;
        }
    }
    vc[0] = arr[idx];
    int len = lon - 1;
    for (int i = idx - 1, j = 0; i >= 0; i--)
    {
        if (dp[i] == len && arr[i] < vc[j])
        {
            vc[++j] = arr[i];
            len--;
        }
    }
    for (int i = lon - 1; i >= 0; i--)
    {
        cout << vc[i] << " ";
    }
    return 0;
}