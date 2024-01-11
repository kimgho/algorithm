#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int vert[10001];
int find(int x)
{
    if (vert[x] == x)
        return x;
    else
        return vert[x] = find(vert[x]);
}
void univ(int x, int y)
{
    x = find(x);
    y = find(y);
    vert[y] = x;
}
bool isCycle(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x == y)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans = 0;
    vector<pair<int, pair<int, int>>> vc;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, dist;
        cin >> a >> b >> dist;
        vc.push_back({dist, {a, b}});
    }
    sort(vc.begin(), vc.end());
    for (int i = 1; i <= n; i++)
        vert[i] = i;
    for (int i = 0; i < vc.size(); i++)
    {
        if (!isCycle(vc[i].second.first, vc[i].second.second))
        {
            univ(vc[i].second.first, vc[i].second.second);
            ans += vc[i].first;
        }
    }
    cout << ans;
    return 0;
}