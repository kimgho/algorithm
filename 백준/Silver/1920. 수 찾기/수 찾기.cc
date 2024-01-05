#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vc;
    int n, k, tmp, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        vc.push_back(k);
    }
    sort(vc.begin(), vc.end());
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &tmp);
        printf("%d\n", binary_search(vc.begin(), vc.end(), tmp));
    }
}