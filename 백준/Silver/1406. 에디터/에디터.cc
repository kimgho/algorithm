#include <algorithm>
#include <iostream>
#include <list>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

string s;
int n;
int main()
{
    io;
    cin >> s >> n;
    list<char> li;
    auto cursor = li.begin();
    for (auto ch : s)
    {
        li.insert(cursor, ch);
    }
    for (int i = 0; i < n; i++)
    {
        char c, z;
        cin >> c;

        if (c == 'L')
        {
            if (cursor != li.begin())
            {
                --cursor;
            }
        }
        else if (c == 'D')
        {
            if (cursor != li.end())
            {
                ++cursor;
            }
        }
        else if (c == 'B')
        {
            if (cursor != li.begin())
            {
                cursor = li.erase(--cursor);
            }
        }
        else if (c == 'P')
        {
            cin >> z;
            li.insert(cursor, z);
        }
    }
    for (auto c : li)
    {
        cout << c;
    }
    return 0;
}