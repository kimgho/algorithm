#include <iostream>
#include <cmath>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int a, b, c;
long long solution(int b)
{
    return b == 1 ? a % c : (b % 2 == 0 ? solution(b / 2) % c * solution(b / 2) % c : solution(b / 2) % c * solution(b / 2 + 1) % c);
}
int main()
{
    io;
    cin >> a >> b >> c;
    cout << solution(b);
    return 0;
}