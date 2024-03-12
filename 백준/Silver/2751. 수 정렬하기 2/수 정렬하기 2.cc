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
        int k;
        cin >> k;
        vc.push_back(k);
    }
    sort(vc.begin(), vc.end());
    for (int i = 0; i < n; i++)
    {
        cout << vc[i] << "\n";
    }
    return 0;
}