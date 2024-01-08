#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    char data;
    Node *left = NULL;
    Node *right = NULL;
};

void preOrder(Node *t)
{
    cout << t->data;
    if (t->left != NULL)
        preOrder(t->left);
    if (t->right != NULL)
        preOrder(t->right);
}
void inOrder(Node *t)
{
    if (t->left != NULL)
        inOrder(t->left);
    cout << t->data;
    if (t->right != NULL)
        inOrder(t->right);
}
void postOrder(Node *t)
{
    if (t->left != NULL)
        postOrder(t->left);
    if (t->right != NULL)
        postOrder(t->right);
    cout << t->data;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<Node> tr(26);
    for (int i = 0; i < n; i++)
    {
        char left, right, root;
        cin >> root >> left >> right;
        tr[root - 'A'].data = root;
        if (left != '.')
            tr[root - 'A'].left = &tr[left - 'A'];
        if (right != '.')
            tr[root - 'A'].right = &tr[right - 'A'];
    }
    preOrder(&tr[0]);
    cout << "\n";
    inOrder(&tr[0]);
    cout << "\n";
    postOrder(&tr[0]);
    return 0;
}