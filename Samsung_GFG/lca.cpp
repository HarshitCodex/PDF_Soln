#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
struct node
{
    int key;
    node *left, *right;
};
node *newNode(int k)
{
    node *temp = new node;
    temp->key = k;
    temp->right = temp->left = NULL;
    return temp;
}
node *findlca(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->key == n1 || root->key == n2)
        return root;
    node *left_lca = findlca(root->left, n1, n2);
    node *right_lca = findlca(root->right, n1, n2);
    if (left_lca && right_lca)
    {
        return root;
    }
    if (left_lca != NULL)
        return findlca(root->left, n1, n2);
    return right_lca;
}
int32_t main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findlca(root, 4, 5)->key;
    cout << "\nLCA(4, 6) = " << findlca(root, 4, 6)->key;
    cout << "\nLCA(3, 4) = " << findlca(root, 3, 4)->key;
    cout << "\nLCA(2, 4) = " << findlca(root, 2, 4)->key;
    return 0;
}