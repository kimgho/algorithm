#include <iostream>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n, k;
int w[101];
int v[101];
int dp[101][100001];
int main()
{
    io;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
    return 0;
}
// i는 배낭의 idx를 나타냄  (1번 배낭 , 2번 배낭 ...n번 배낭)
// j는 무게의 range를 나타냄 (max weight = 1~k)
// 그럼 무엇이냐
// i번의 배낭의 무게 w[i]가 j(현재 무게범위)보다 작거나 같은 경우에만 i번 배낭의 가치 v[i]를 저장할 수 있음
// 따라서
// j>=w[i]인 경우, dp[i][j] = max(dp[i-1][j](이전 배낭까지의 총 가치),dp[i-1][j-w[i]]+v[i])(이전 배낭에서 남은 무게를 뺀 idx에 현재 가치를 더함)
// j<w[i]인 경우, dp[i][j] = dp[i-1][j]가 됨(이전 가치의 합)
// 최종적으로 1번부터 n번의 배낭을 다 돌고나서 무게 1부터 k까지 다 돌리고 난 후 가치는 dp[n][k]에 저장되어 있음
// 따라서 출력은 dp[n][k]를 해야 함
