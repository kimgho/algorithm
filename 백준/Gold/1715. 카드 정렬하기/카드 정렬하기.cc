#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;
        pq.push(card);
    }
    while (pq.size() > 1)
    {
        int c1 = pq.top();
        pq.pop();
        int c2 = pq.top();
        pq.pop();
        sum += c1 + c2;
        pq.push(c1 + c2);
    }
    cout << sum;
    return 0;
}