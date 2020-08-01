#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dp[n];
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
        }
        cout << dp[n - 1] << endl;
        }
}