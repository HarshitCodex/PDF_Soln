#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        Node *odd = new Node(-1);
        Node *even = new Node(-1);
        Node *oddtemp = odd;
        Node *eventemp = even;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                Node *temp = new Node(x);
                eventemp->next = temp;
                temp->next = NULL;
                eventemp = eventemp->next;
            }
            else
            {
                Node *temp = new Node(x);
                oddtemp->next = temp;
                temp->next = NULL;
                oddtemp = oddtemp->next;
            }
        }
        eventemp->next = odd->next;
        Node *temp = even->next;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    return 0;
}