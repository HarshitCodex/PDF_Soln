#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *next;
    int data;
};
class linked_list
{
    node *head;
    node *middle()
    {
        node *p1 = head;
        node *p2 = head;
        if (head != NULL)
        {
            while (p2 != NULL && p2->next != NULL)
            {
                p2 = p2->next->next;
                p1 = p1->next;
            }
            return p1;
        }
        return NULL;
    }
};