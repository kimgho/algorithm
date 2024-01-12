#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n;
vector<pair<int, int>> vc;
priority_queue<int, vector<int>, greater<int>> pq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        vc.push_back({start, end});
    }
    sort(vc.begin(), vc.end());
    pq.push(vc[0].second);
    for (int i = 1; i < n; i++)
    {
        if (vc[i].first >= pq.top())
        {
            pq.pop();
            pq.push(vc[i].second);
        }
        else
        {
            pq.push(vc[i].second);
        }
    }
    cout << pq.size();
    return 0;
}