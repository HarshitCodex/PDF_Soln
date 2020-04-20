#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int coinchange(int n, int a[], int val)
{
    int dp[val + 1][n];
    for (int i = 0; i < n; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= i)
            {
                dp[i][j] = (j == 0 ? 0 : dp[i][j - 1]) + dp[i - a[j]][j];
            }

            else
            {
                dp[i][j] = (j == 0 ? 0 : dp[i][j - 1]);
            }
        }
    }
    return dp[val][n - 1];
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n >> val;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = coinchange(n, a, val);
        cout << res << endl;
    }
}