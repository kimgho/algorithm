#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n;
int ar[1501][1501];
int main()
{
    io;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n * n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
        if (pq.size() > n)
        {
            pq.pop();
        }
    }
    cout << pq.top();
    return 0;
}