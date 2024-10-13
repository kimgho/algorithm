#include <iostream>
#include <list>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        list<char> li;
        auto cursor = li.begin();
        for (char ch : s)
        {
            if (ch == '<')
            {
                if (cursor != li.begin())
                {
                    --cursor;
                }
            }
            else if (ch == '>')
            {
                if (cursor != li.end())
                {
                    ++cursor;
                }
            }
            else if (ch == '-')
            {
                if (cursor != li.begin())
                {
                    cursor = li.erase(--cursor);
                }
            }
            else
            {
                li.insert(cursor, ch);
            }
        }
        for (char ch : li)
        {
            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}