#include <bits/stdc++.h>
using namespace std;
int minele = -1;
stack<int> s;
/*Complete the function(s) below*/
void push(int a)
{
    //add code here.
    if (s.empty())
    {
        s.push(a);
        minele = a;
    }
    else if (a < minele)
    {
        s.push(2 * minele - a);
        minele = a;
    }
    else
    {
        s.push(a);
    }
}

bool isFull(int n)
{
    //add code here.
    if (s.size() == n)
        return true;
    return false;
}

bool isEmpty()
{
    //add code here.
    return s.empty();
}

int pop()
{
    //add code here.
    if (s.empty())
        return -1;
    if (s.top() > minele)
    {
        int x = s.top();
        s.pop();
        return x;
    }
    else
    {
        int x = minele;
        minele = 2 * minele - s.top();
        s.pop();
        return x;
    }
}

int getMin()
{
    //add code here.
    return minele;
}