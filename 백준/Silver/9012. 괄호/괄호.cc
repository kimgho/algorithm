#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if (st.empty() || str[j] == '(')
                st.push(str[j]);
            else if (st.top() == '(')
                st.pop();
        }
        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}