#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int n;
bool visited[101][101];
vector<string> graph(101);
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int moveX = x + dx[i];
        int moveY = y + dy[i];
        if (moveX < 0 || moveX >= n || moveY < 0 || moveY >= n)
            continue;
        if (!visited[moveX][moveY] && graph[x][y] == graph[moveX][moveY])
        {
            dfs(moveX, moveY);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int nonRGB = 0, RGB = 0;
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> graph[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == false)
            {
                nonRGB++;
                visited[i][j] = true;
                dfs(i, j);
            }
        }
    }
    cout << nonRGB << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == 'G')
                graph[i][j] = 'R';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == false)
            {
                RGB++;
                visited[i][j] = true;
                dfs(i, j);
            }
        }
    }
    cout << RGB << "\n";
    return 0;
}