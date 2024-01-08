#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int n, cnt;
bool visited[25][25];
int graph[25][25];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
vector<int> res;
void dfs(int x, int y)
{
    cnt++;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n)
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = str[j] - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && graph[i][j] == 1)
            {
                cnt = 0;
                dfs(i, j);
                res.push_back(cnt);
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
    return 0;
}