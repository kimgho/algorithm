#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, sum = 0;
    cin >> n;
    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            sum += n / 5;
            cout << sum;
            return 0;
        }
        n -= 3;
        sum++;
    }
    cout << -1;
    return 0;
}