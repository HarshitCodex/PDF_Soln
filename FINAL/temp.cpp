Node *reversealt(Node *head, int k)
{
    Node *curr = head;
    Node *prev = NULL, *next = NULL;
    int cnt = 0;
    wile(curr && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if (head)
    {
        head->next = curr;
    }
    cnt = 0;
    while (cnt < k - 1 && curr)
    {
        curr = curr->next;
        cnt++;
    }
    if (curr)
    {
        curr->next = reversealt(curr->next, k);
    }
    return prev;
}