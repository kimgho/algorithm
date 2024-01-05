#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vc;
    int n, k, tmp, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        vc.push_back(k);
    }
    sort(vc.begin(), vc.end());
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> tmp;
        printf("%d\n", binary_search(vc.begin(), vc.end(), tmp));
    }
}
/*
cin,cout으로 하면 시간초과가 나옴
왜냐면 iostream이란게 c의 stream과 동기화 되어있기 때문에
같은 stream buffer에 쌓이게 됨
cin은 10^7개의 입력을 받을 때 2초, scanf는 0.798초
만약 cin을 쓸 것이라면
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
을 추가하자.
그럼 cpp의 iostream과 C의 stdio의 동기화를 끊고
각 독립적인 buffer를 가지게 됨
*/