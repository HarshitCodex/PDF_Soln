#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int min(int a, int b, int c)
{
    return min(a, min(b, c));
}
int minjump(int n, int arr[])
{
    int dp[n];
    if (n == 0 || arr[0] == 0)
        return -1;
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = LONG_LONG_MAX;
        for (int j = 0; j < i; j++)
        {
            if (i <= j + arr[j] && dp[j] != LONG_LONG_MAX)
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }
    return dp[n - 1];
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = minjump(n, arr);
        cout << res << endl;
    }
}