#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    io;
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int profit, maxSum = -10001, curSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> profit;
            curSum += profit; // 누적
            maxSum = max(maxSum, curSum);
            if (curSum < 0) // 모든 수익이 음수로 들어올 경우, 가장 작은 음수가 답이 됨
                curSum = 0;
        }
        cout << maxSum << "\n";
    }
    return 0;
}
