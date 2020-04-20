#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
void nge(int n, int a[], int S[])
{
    stack<int> s;
    s.push(0);
    int next;
    for (int i = 1; i < n; i++)
    {
        next = i;
        while ((!s.empty()) && a[next] > a[s.top()])
        {
            S[s.top()] = a[next];
            s.pop();
        }
        s.push(next);
    }
    while (!s.empty())
    {
        S[s.top()] = -1;
        s.pop();
    }
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
        int S[n];
        nge(n, a, S);
        for (int i = 0; i < n; i++)
        {
            cout << S[i] << " ";
        }
        cout << endl;
    }
}