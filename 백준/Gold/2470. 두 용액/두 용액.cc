#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n, ans[2];
vector<int> vc;
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    int start = 0, end = n - 1, sum, min = 2111111111;
    while (start < end)
    {
        sum = vc[start] + vc[end];
        if (min > abs(sum))
        {
            min = abs(sum);
            ans[0] = vc[start];
            ans[1] = vc[end];
        }
        if (sum < 0)
            start++;
        else
            end--;
    }
    cout << ans[0] << " " << ans[1];
    return 0;
}