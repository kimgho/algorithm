#include <iostream>
#include <string>
#include <stack>
using namespace std;

int lcs[1001][1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str1, str2;
    stack<char> st;
    cin >> str1 >> str2;
    int a = str1.size();
    int b = str2.size();
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (str1[i - 1] == str2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
    while (lcs[a][b] != 0)
    {
        if (lcs[a][b] == lcs[a][b - 1])
        {
            b--;
        }
        else if (lcs[a][b] == lcs[a - 1][b])
        {
            a--;
        }
        else
        {
            st.push(str1[a - 1]);
            a--;
            b--;
        }
    }
    cout << lcs[str1.size()][str2.size()] << "\n";
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}