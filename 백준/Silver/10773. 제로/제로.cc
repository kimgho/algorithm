#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    int n, tmp, size, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 0)
            st.pop();
        else
            st.push(tmp);
    }
    size = st.size();
    for (int i = 0; i < size; i++)
    {
        sum += st.top();
        st.pop();
    }
    cout << sum;
    return 0;
}