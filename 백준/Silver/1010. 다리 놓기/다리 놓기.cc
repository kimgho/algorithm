#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
int main()
{
    io;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, ans = 1, cnt = 1;
        cin >> n >> m;
        for (int i = m; i > m - n; i--)
        {
            ans *= i;
            ans /= cnt++;
        }
        cout << ans << "\n";
    }
    return 0;
}