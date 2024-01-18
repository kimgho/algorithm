#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define INF 999999999
int v, e, start;
vector<pair<int, int>> graph[20001];
int d[20001];
void dijkstra()
{
    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty())
    {
        int dist = -pq.top().first;
        int now = pq.top().second;
        pq.pop();
        for (int i = 0; i < graph[now].size(); i++)
        {
            int next = graph[now][i].first;
            int ncost = graph[now][i].second;
            if (d[next] > dist + ncost)
            {
                d[next] = dist + ncost;
                pq.push({-d[next], next});
            }
        }
    }
    for (int i = 1; i <= v; i++)
    {
        if (d[i] == INF)
            cout << "INF\n";
        else
            cout << d[i] << "\n";
    }
}
int main()
{
    io;
    cin >> v >> e >> start;
    for (int i = 0; i < e; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        graph[a].push_back({b, cost});
    }
    fill(d, d + 20001, INF);
    dijkstra();
    return 0;
}