#include <iostream>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 100001
int n;
vector<int> tr[MAX];
int arr[MAX];
bool visited[MAX];
void dfs(int n)
{
    visited[n] = true;
    for (int i = 0; i < tr[n].size(); i++)
    {
        int x = tr[n][i];
        if (visited[x])
            continue;
        visited[x] = true;
        arr[x] = n;
        dfs(x);
    }
}
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        tr[a].push_back(b);
        tr[b].push_back(a);
    }
    dfs(1);
    for (int i = 2; i <= n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}