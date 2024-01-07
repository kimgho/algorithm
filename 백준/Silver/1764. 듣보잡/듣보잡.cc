#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> noListen(n);
    vector<string> result;
    for (int i = 0; i < n; i++)
    {
        cin >> noListen[i];
    }
    sort(noListen.begin(), noListen.end());
    string noHear;
    for (int i = 0; i < m; i++)
    {
        cin >> noHear;
        if (binary_search(noListen.begin(), noListen.end(), noHear))
            result.push_back(noHear);
    }
    sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (string str : result)
    {
        cout << str << "\n";
    }
    return 0;
}