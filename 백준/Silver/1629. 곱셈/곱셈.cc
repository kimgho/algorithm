#include <iostream>
using namespace std;
int a, b, c;
long long solution(int b)
{
    return b == 1 ? a % c : (b % 2 == 0 ? solution(b / 2) % c * solution(b / 2) % c : solution(b / 2) % c * solution(b / 2 + 1) % c);
}
int main()
{
    cin >> a >> b >> c;
    cout << solution(b);
    return 0;
}
