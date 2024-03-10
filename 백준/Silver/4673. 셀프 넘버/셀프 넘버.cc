#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
bool isSelf[10001] = {
    false,
};
int d(int n)
{
    int selfNumber = n;
    while (n != 0)
    {
        selfNumber += n % 10;
        n /= 10;
    }
    return selfNumber;
}
int main()
{
    io;
    for (int i = 1; i < 10001; i++)
    {
        int selfNumber = d(i);
        if (selfNumber < 10001)
            isSelf[selfNumber] = true;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (!isSelf[i])
            cout << i << "\n";
    }
    return 0;
}