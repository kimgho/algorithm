#include <iostream>
#include <cstring>
using namespace std;

int w, h;
int graph[51][51];
bool visited[51][51];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
void dfs(int y, int x)
{
    visited[y][x] = true;
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= w || ny < 0 || ny >= h)
            continue;
        if (!visited[ny][nx] && graph[ny][nx] == 1)
        {
            dfs(ny, nx);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (1)
    {
        int cnt = 0;
        cin >> w >> h;
        if (w == 0 && h == 0)
            break;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> graph[i][j];
            }
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (!visited[i][j] && graph[i][j] == 1)
                {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << "\n";
        memset(visited, false, sizeof(visited));
        memset(graph, 0, sizeof(graph));
    }
    return 0;
}