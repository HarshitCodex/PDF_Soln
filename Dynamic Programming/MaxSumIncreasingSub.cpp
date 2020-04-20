#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int msis(int a[], int n)
{
    int dp[n];
    dp[0] = a[0];
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && dp[i] < dp[j] + a[i])
            {
                dp[i] = dp[j] + a[i];
            }
        }
        mx = max(mx, dp[i]);
    }
    return mx;
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
        int res = msis(a, n);
        cout << res << endl;
    }
}