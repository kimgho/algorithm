#include <algorithm>
#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int r, c, res = 0;
char graph[21][21];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
bool visit[26];
void dfs(int n, int y, int x)
{
    res = max(res, n);
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= r || nx >= c)
            continue;
        if (visit[graph[ny][nx] - 'A'])
            continue;

        visit[graph[ny][nx] - 'A'] = true;
        dfs(n + 1, ny, nx);
        visit[graph[ny][nx] - 'A'] = false;
    }
}
int main()
{
    io;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        string a;
        cin >> a;
        for (int j = 0; j < c; j++)
        {
            graph[i][j] = a[j];
        }
    }
    visit[graph[0][0] - 'A'] = true;
    dfs(1, 0, 0);
    cout << res;
    return 0;
}