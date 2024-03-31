#include <iostream>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n;
int arr[100001];
int main()
{
    io;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(currSum, maxSum);
    }
    cout << maxSum;
    return 0;
}