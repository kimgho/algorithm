#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int v, e, cnt = 0;
vector<int> graph[1001];
bool visited[1001];
void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int tmp = graph[x][i];
        if (!visited[tmp])
            dfs(tmp);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= v; i++)
    {
        if (visited[i] == 0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
    return 0;
}
