#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, rono, ans = 1;
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
        int from, to;
        cin >> rono >> from >> to;
        vc.push_back({from, to});
    }
    sort(vc.begin(), vc.end());
    for (int i = 0; i < vc.size(); i++)
    {
        if (pq.empty())
        {
            pq.push(vc[i].second);
        }
        else
        {
            if (pq.top() > vc[i].first)
            {
                ans++;
            }
            else
            {
                pq.pop();
            }
            pq.push(vc[i].second);
        }
    }
    cout << ans;
    return 0;
}