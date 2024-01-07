#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int t, n, m, k;
int graph[51][51];
bool visited[51][51];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx > n || ny < 0 || ny > m)
            continue;
        if (!visited[nx][ny] && graph[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            graph[a][b] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (graph[i][j] == 1)
                {
                    if (!visited[i][j])
                    {
                        cnt++;
                        dfs(i, j);
                    }
                }
            }
        }
        cout << cnt << "\n";
        memset(visited, false, sizeof(visited));
        memset(graph, 0, sizeof(graph));
    }
    return 0;
}