#include <iostream>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 999999999
int n;
int mat[501][2];
int dp[501][501];
int main()
{
    io;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[i][0] = a;
        mat[i][1] = b;
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][i] = 0;
    }
    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n - l + 1; i++)
        {
            int j = i + l - 1;
            dp[i][j] = MAX;
            for (int k = i; k <= j - 1; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + mat[i][0] * mat[k][1] * mat[j][1]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
// MAX값의 설정을 낮게 해서 2번 틀림 (999,999 -> 999,999,999로 수정)
