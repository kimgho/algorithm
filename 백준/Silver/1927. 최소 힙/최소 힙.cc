#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            if (pq.size())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
            else
                cout << 0 << "\n";
        }
        else
        {
            pq.push(num);
        }
    }
    return 0;
}