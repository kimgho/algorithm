#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n, ans = 1;
int arr[1001];
int dp[1001];
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
            if (arr[i] < arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}