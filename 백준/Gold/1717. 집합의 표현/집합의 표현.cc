#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int parent[1000001];

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
void findParent(int x, int y)
{
    int xx = find(x);
    int yy = find(y);
    if (xx == yy)
        cout << "YES\n";
    else
        cout << "NO\n";
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
        int o, a, b;
        cin >> o >> a >> b;
        if (o == 0)
        {
            univ(a, b);
        }
        else
        {
            findParent(a, b);
        }
    }
    return 0;
}