#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int a, k, res = 0;
vector<int> vc;
int main()
{
    io;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> k;
        vc.push_back(k);
    }
    sort(vc.begin(), vc.end());
    for (int i = 0; i < a; i++)
    {
        vc[i + 1] += vc[i];
        res += vc[i];
    }
    cout << res;
    return 0;
}