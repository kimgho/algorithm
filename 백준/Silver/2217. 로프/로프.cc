#include <iostream>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n;
int main()
{
    io;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n, greater<>());
    for (int i = 0; i < n; i++)
    {
        ar[i] = ar[i] * (i + 1);
    }
    sort(ar, ar + n, greater<>());
    cout << ar[0];
    return 0;
}