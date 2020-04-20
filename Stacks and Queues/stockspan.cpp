#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
void findspan(int n, int a[], int S[])
{
    stack<int> s;
    s.push(0);
    S[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && a[s.top()] <= a[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            S[i] = i + 1;
        }
        else
        {
            S[i] = i - s.top();
        }
        s.push(i);
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
        findspan(n, a, S);
        for (int i = 0; i < n; i++)
        {
            cout << S[i] << " ";
        }
        cout << endl;
    }
}