#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int lis(int a[], int n)
{
    int dp[n];
    dp[0] = 1;
    int mx = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
        mx = max(mx, dp[i]);
    }
    return mx;
}
int lisnlogn(int a[], int n)
{
    int l[n];
    vector<int> I;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(I.begin(), I.end(), a[i]);
        int index = it - I.begin();
        if (it == I.end())
            I.push_back(a[i]);
        else
        {
            I[index] = a[i];
        }
        l[i] = index + 1;
    }
    return I.size();
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
        int res = lis(a, n);
        int res2 = lisnlogn(a, n);
        cout << res << " " << res2 << endl;
    }
}