#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int val;
            cin >> val;
            s.push(val);
        }
        else if (str == "pop")
        {
            if (!s.empty())
            {
                printf("%d\n", s.top());
                s.pop();
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (str == "size")
        {
            printf("%d\n", s.size());
        }
        else if (str == "empty")
        {
            printf("%d\n", s.empty());
        }
        else if (str == "top")
        {
            if (!s.empty())
                printf("%d\n", s.top());
            else
                printf("-1\n");
        }
    }
    return 0;
}
