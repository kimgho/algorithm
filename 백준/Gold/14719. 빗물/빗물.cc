#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int h, w, answer = 0;
int ar[501];
int main()
{
    io;
    cin >> h >> w;
    for (int i = 0; i < w; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i < w - 1; i++)
    {
        int l = 0, r = 0;
        for (int j = 0; j < i; j++)
        {
            l = max(l, ar[j]);
        }
        for (int j = w - 1; j > i; j--)
        {
            r = max(r, ar[j]);
        }
        answer += max(0, (min(l, r) - ar[i]));
    }
    cout << answer;
    return 0;
}