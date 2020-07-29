#include <bits/stdc++.h>
using namespace std;
int msis(int n, int a[])
{
    int dp[n];
    int maxres = a[0];
    for (int i = 0; i < n; i++)
    {
        dp[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i] && dp[j] + a[i] > dp[i])
                dp[i] = dp[j] + a[i];
        }
        maxres = max(maxres, dp[i]);
    }
    return maxres;
}
int main()
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
        cout << msis(n, a) << endl;
    }
}