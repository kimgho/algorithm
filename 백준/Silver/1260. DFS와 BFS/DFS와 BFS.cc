#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
const int MAX = 1001;
vector<int> graph[MAX];
bool visited[MAX];
void dfs(int x)
{
    visited[x] = true;
    cout << x << " ";
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
            dfs(y);
    }
}
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int data = q.front();
        q.pop();
        cout << data << " ";
        for (int i = 0; i < graph[data].size(); i++)
        {
            int y = graph[data][i];
            if (!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}
int main()
{
    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(v);
    cout << endl;
    memset(visited, 0, sizeof(visited));
    bfs(v);
    return 0;
}