#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, ans = 0;
vector<pair<int, pair<int, int>>> vc;
int parent[100001];
int find(int x)
{
    if (parent[x] == x)
        return x;
    else
        return parent[x] = find(parent[x]);
}
void univ(int x, int y)
{
    int xx = find(x);
    int yy = find(y);
    parent[yy] = xx;
}
bool isCycle(int x, int y)
{
    int xx = find(x);
    int yy = find(y);
    if (xx == yy)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vc.push_back({c, {a, b}});
    }
    sort(vc.begin(), vc.end());
    int maxCost = 0;
    for (int i = 0; i < m; i++)
    {
        if (!isCycle(vc[i].second.first, vc[i].second.second))
        {
            maxCost = max(maxCost, vc[i].first);
            ans += vc[i].first;
            univ(vc[i].second.first, vc[i].second.second);
        }
    }
    cout << ans - maxCost;
    return 0;
}