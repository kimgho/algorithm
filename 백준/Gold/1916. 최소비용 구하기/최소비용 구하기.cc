#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 999999999
int n, m;
int graph[1001];
vector<pair<int, int>> vc[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
void bfs(int start)
{
    pq.push({0, start});
    while (!pq.empty())
    {
        int cur = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        if (cost > graph[cur])
        {
            continue;
        }
        for (int i = 0; i < vc[cur].size(); i++)
        {
            int next = vc[cur][i].first;
            int next_cost = graph[cur] + vc[cur][i].second;
            if (next_cost < graph[next])
            {
                graph[next] = next_cost;
                pq.push({next_cost, next});
            }
        }
    }
}
int main()
{
    io;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vc[a].push_back({b, c});
    }
    int from, to;
    cin >> from >> to;
    fill_n(graph, 1001, INF);
    graph[from] = 0;
    bfs(from);
    cout << graph[to];
    return 0;
}