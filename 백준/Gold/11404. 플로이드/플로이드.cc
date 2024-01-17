#include <iostream>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int map[101][101];
int n, m;
int main()
{
    io;
    cin >> n >> m;
    fill(map[0], map[101], 99999999);
    for (int i = 1; i <= n; i++)
    {
        map[i][i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        map[a][b] = min(map[a][b], c);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (map[i][j] == 99999999)
                cout << "0 ";
            else
                cout << map[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}