#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n, m;
int ar[1025][1025];
int main()
{
    io;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            ar[i][j] = ar[i][j] + ar[i][j - 1];
        }
    }
    while (m--)
    {
        int x1, y1, x2, y2;
        int sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++)
        {
            sum += (ar[i][y2] - ar[i][y1 - 1]);
        }
        cout << sum << '\n';
    }
    return 0;
}
