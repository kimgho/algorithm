#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n, s;
int main()
{
    io;
    cin >> n >> s;
    vector<int> vc;
    int minLen = 100001;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vc.push_back(a);
    }
    int left = 0, right = 0, sum = vc[0];
    while (right < n)
    {
        if (sum < s)
        {
            sum += vc[++right];
        }
        else if (sum >= s)
        {
            minLen = min(right - left + 1, minLen);
            sum -= vc[left++];
        }
    }
    if (minLen == 100001)
        cout << 0;
    else
        cout << minLen;
    return 0;
}