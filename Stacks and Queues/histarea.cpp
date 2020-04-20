#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int hist(int n, int a[])
{
    stack<int> s;
    int maxarea = 0;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        if (s.empty())
            s.push(i);
        else if (a[s.top()] <= a[i])
        {
            s.push(i);
        }
        else
        {
            int tp = s.top();
            s.pop();
            int area = a[tp] * (s.empty() ? i : i - s.top() - 1);
            maxarea = max(area, maxarea);
            i--;
        }
    }
    int i = n;
    while (!s.empty())
    {
        int tp = s.top();
        s.pop();
        int area = a[tp] * (s.empty() ? i : i - s.top() - 1);
        maxarea = max(area, maxarea);
    }
    return maxarea;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = hist(n, a);
        cout << res << endl;
    }
}