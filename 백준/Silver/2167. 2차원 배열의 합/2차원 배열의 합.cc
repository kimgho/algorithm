#include <iostream>
using namespace std;
int n, m, k;
int ar[301][301];
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    cin >> k;
    for (int z = 0; z < k; z++)
    {
        int i, j, x, y;
        int sum = 0;
        cin >> i >> j >> x >> y;
        for (int a = i - 1; a < x; a++)
        {
            for (int b = j - 1; b < y; b++)
            {
                sum += ar[a][b];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}