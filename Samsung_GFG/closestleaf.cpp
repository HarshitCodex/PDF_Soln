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
    char key;
    node *left, *right;
};
node *newNode(char k)
{
    node *temp = new node;
    temp->key = k;
    temp->right = temp->left = NULL;
    return temp;
}
int closestdown(node *root)
{
    if (root == NULL)
        return LONG_LONG_MAX;
    if (root->right == NULL && root->left == NULL)
    {
        return 0;
    }
    return 1 + min(closestdown(root->left), closestdown(root->right));
}
int findclosestutil(node *root, char k, node *parent[], int index)
{
    if (root == NULL)
        return LONG_LONG_MAX;
    if (root->key == k)
    {
        int res = closestdown(root);
        for (int i = index - 1; i >= 0; i--)
        {
            res = min(res, index - i + closestdown(parent[i]));
        }
        return res;
    }
    parent[index] = root;
    return min(findclosestutil(root->left, k, parent, index + 1), findclosestutil(root->right, k, parent, index + 1));
}
int findClosest(node *root, char k)
{
    node *parent[100];
    return findclosestutil(root, k, parent, 0);
}
int32_t main()
{
    // Let us construct the BST shown in the above figure
    struct node *root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');
    root->right->left = newNode('E');
    root->right->right = newNode('F');
    root->right->left->left = newNode('G');
    root->right->left->left->left = newNode('I');
    root->right->left->left->right = newNode('J');
    root->right->right->right = newNode('H');
    root->right->right->right->left = newNode('K');

    char k = 'H';
    cout << "Distance of the closest key from " << k << " is "
         << findClosest(root, k) << endl;
    k = 'C';
    cout << "Distance of the closest key from " << k << " is "
         << findClosest(root, k) << endl;
    k = 'E';
    cout << "Distance of the closest key from " << k << " is "
         << findClosest(root, k) << endl;
    k = 'B';
    cout << "Distance of the closest key from " << k << " is "
         << findClosest(root, k) << endl;

    return 0;
}