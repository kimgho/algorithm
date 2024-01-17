#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int graph[1001][1001];
bool visited[1001][1001];
queue<pair<int, int>> q;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int m, n, day = 0;
void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if (graph[nx][ny] == 0)
            {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}
int main()
{
    io;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }
    bfs();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
            day = max(day, graph[i][j]);
        }
    }
    cout << day - 1;
    return 0;
}