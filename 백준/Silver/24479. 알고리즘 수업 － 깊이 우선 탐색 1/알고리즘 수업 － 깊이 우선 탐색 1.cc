#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
bool visited[100001];
vector<int> v[100001];
int check[100001];
int num = 0;
void dfs(int r)
{
    if (visited[r])
    {
        return;
    }
    visited[r] = true;
    check[r] = ++num;
    sort(v[r].begin(), v[r].end());
    for (int i = 0; i < v[r].size(); i++)
    {
        dfs(v[r][i]);
    }
}
int main()
{
    io;
    int n, m, r;
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(r);
    for (int i = 1; i <= n; i++)
    {
        cout << check[i] << "\n";
    }
}