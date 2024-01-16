#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    io;
    int n, x, ans = 0;
    cin >> n;
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    cin >> x;
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (vc[left] + vc[right] == x)
        {
            ans++;
            right--;
        }
        else if (vc[left] + vc[right] > x)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout << ans;
    return 0;
}