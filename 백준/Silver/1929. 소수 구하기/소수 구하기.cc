#include <iostream>
#include <math.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int m, n;
int arr[1000001];
int main()
{
    io;
    cin >> m >> n;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i])
            cout << arr[i] << "\n";
    }
    return 0;
}