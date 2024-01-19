#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int graph[101][101][101];
bool visited[101][101][101];
queue<pair<pair<int, int>, int>> q;
int dx[] = {0, 0, -1, 1, 0, 0};
int dy[] = {-1, 1, 0, 0, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
int m, n, h, day = 0;
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
            if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h || graph[nx][ny][nz] == -1)
                continue;
            if (graph[nx][ny][nz] == 0)
            {
                graph[nx][ny][nz] = graph[x][y][z] + 1;
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

                cin >> graph[i][j][k];
                if (graph[i][j][k] == 1)
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
                if (graph[i][j][k] == 0)
                {
                    cout << -1;
                    return 0;
                }
                day = max(day, graph[i][j][k]);
            }
        }
    }
    cout << day - 1;
    return 0;
}