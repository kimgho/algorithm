#include <iostream>
#include <algorithm>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
long s;
int main()
{
    io;
    cin >> s;
    long sum = 0, i = 1;
    while (1)
    {
        sum += i;
        if (sum > s)
        {
            i--;
            break;
        }
        else if (sum == s)
        {
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}