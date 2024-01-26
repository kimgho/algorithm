#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n;
vector<int> vc;
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (vc.empty() || vc.back() < tmp)
        {
            vc.push_back(tmp);
        }
        else
        {
            auto pos = lower_bound(vc.begin(), vc.end(), tmp);
            *pos = tmp;
        }
    }
    cout << vc.size();
    return 0;
}