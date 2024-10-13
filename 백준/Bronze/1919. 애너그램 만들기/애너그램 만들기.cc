#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int freq1[26] = {};
int freq2[26] = {};

int cnt = 0;
int main()
{
    io;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        freq2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            cnt += abs(freq1[i] - freq2[i]);
        }
    }
    cout << cnt;
    return 0;
}