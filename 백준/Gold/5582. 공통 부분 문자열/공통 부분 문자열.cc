#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int dp[4001][4001];
string s1, s2;
int ans = 0;
int main()
{
    io;
    cin >> s1 >> s2;
    memset(dp, 0, sizeof(dp));
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (s1[i] == s2[j])
            {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }
            ans = max(dp[i + 1][j + 1], ans);
        }
    }
    cout << ans;
    return 0;
}