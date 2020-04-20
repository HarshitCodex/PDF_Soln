#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
class mystack
{
public:
    stack<int> s;
    int minele;
    void getmin()
    {
        if (s.empty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Minele is :" << minele << endl;
        }
    }
    void peek()
    {
        if (s.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int t = s.top();
        if (t < minele)
        {
            cout << "Top is :" << minele << endl;
        }
        else
        {
            cout << "Top is :" << t << endl;
        }
    }
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int t = s.top();
        s.pop();
        if (t < minele)
        {
            cout << "Element removed is : " << minele << endl;
            minele = 2 * minele - t;
        }
        else
            cout << "Element removed is : " << t << endl;
    }
    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            minele = x;
            cout << "Element pushed is " << x << endl;
        }
        else if (x < minele)
        {
            s.push(2 * x - minele);
            cout << "Element pushed is " << 2 * x - minele << endl;
            minele = x;
        }
        else
        {
            s.push(x);
            cout << "Element pushed is " << x << endl;
        }
    }
};
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mystack s;
        s.push(3);
        s.push(5);
        s.getmin();
        s.push(2);
        s.push(1);
        s.getmin();
        s.pop();
        s.getmin();
        s.pop();
        s.peek();
    }
}