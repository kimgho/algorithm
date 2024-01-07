#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout << "<";
    while (q.size() > 1)
    {
        for (int i = 1; i < m; i++)
        {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">\n";
    return 0;
}