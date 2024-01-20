#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 101
int m, n, h, days = 0;
int tomato[MAX][MAX][MAX];
bool visited[MAX][MAX][MAX];
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
queue<pair<pair<int, int>, int>> q;
void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h || tomato[nx][ny][nz] == -1)
                continue;
            if (tomato[nx][ny][nz] == 0)
            {
                tomato[nx][ny][nz] = tomato[x][y][z] + 1;
                q.push({{nx, ny}, nz});
            }
        }
    }
}
int main()
{
    io;
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> tomato[i][j][k];
                if (tomato[i][j][k] == 1)
                {
                    q.push({{i, j}, k});
                }
            }
        }
    }
    bfs();
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (tomato[i][j][k] == 0)
                {
                    cout << -1;
                    return 0;
                }
                days = max(days, tomato[i][j][k]);
            }
        }
    }
    cout << days - 1;
    return 0;
}