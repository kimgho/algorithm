#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int data;
            cin >> data;
            q.push(data);
        }
        else if (str == "pop")
        {
            if (!q.empty())
            {
                printf("%d\n", q.front());
                q.pop();
            }
            else
                printf("-1\n");
        }
        else if (str == "size")
        {
            printf("%d\n", q.size());
        }
        else if (str == "empty")
        {
            printf("%d\n", q.empty());
        }
        else if (str == "front")
        {
            if (!q.empty())
            {
                printf("%d\n", q.front());
            }
            else
                printf("-1\n");
            ;
        }
        else if (str == "back")
        {
            if (!q.empty())
            {
                printf("%d\n", q.back());
            }
            else
                printf("-1\n");
        }
    }
}