#include <iostream>
#include <queue>

using namespace std;
bool visited[101];
int n, edge, cnt = 0;
vector<int> graph[101];
void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
        {
            cnt++;
            dfs(y);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> edge;
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout << cnt;
    return 0;
}