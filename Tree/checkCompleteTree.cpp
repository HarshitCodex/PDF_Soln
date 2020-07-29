bool isCompleteBT(node *root)
{
    if (root == NULL)
        return true;
    queue<node *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            if (flag == true)
                return false;
            q.push(temp->left);
        }
        else
        {
            flag = true;
        }
        if (temp->right)
        {
            if (flag == true)
                return false;
            q.push(temp->right);
        }
        else
        {
            flag = true;
        }
    }
    return true;
}