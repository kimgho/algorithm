#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int n;
vector<string> vc;
int sorting(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    else
    {
        return a.length() < b.length();
    }
}
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vc.push_back(str);
    }
    sort(vc.begin(), vc.end(), sorting);
    vc.erase(unique(vc.begin(), vc.end()), vc.end());
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << "\n";
    }
    return 0;
}
