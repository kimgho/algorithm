#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int dp[1001][1001];
int main()
{
    io;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i <= s1.length(); i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= s2.length(); i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= s1.length(); i++)
    {
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            }
        }
    }
    cout << dp[s1.length()][s2.length()];
    return 0;
}
