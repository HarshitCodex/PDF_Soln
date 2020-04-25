#include <bits/stdc++.h>
using namespace std;
void nge(int n, int a[])
{
    stack<int> s;
    int res[n];
    memset(res, -1, sizeof(res));
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        if (s.empty())
        {
            s.push(i);
            continue;
        }
        while (!s.empty() && a[s.top()] < a[i])
        {
            res[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    nge(n, a);
}