#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 1;
    vector<pair<int, int>> vc;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        vc.push_back(make_pair(end, start));
    }
    sort(vc.begin(), vc.end());
    int init = vc[0].first;
    for (int i = 1; i < n; i++)
    {
        if (vc[i].second >= init)
        {
            cnt++;
            init = vc[i].first;
        }
    }
    cout << cnt;
}