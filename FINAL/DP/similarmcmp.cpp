#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &a)
{
    int n = a.size();
    int dp[n][n];
    int prefsum[n];
    prefsum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        dp[i][i + 1] = a[i] + a[i + 1];
    }
    for (int gap = 2; gap < n; gap++)
    {
        for (int i = 0; i < n - gap; i++)
        {
            int j = i + gap;
            int tot = prefsum[j] - ((i == 0) ? 0 : prefsum[i - 1]);
            int minres = INT_MAX;
            for (int k = i; k < j; k++)
            {
                int val = tot + dp[i][k] + dp[k + 1][j];
                minres = min(minres, val);
            }
            dp[i][j] = minres;
        }
    }
    return dp[0][n - 1];
}

int main()
{
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
        cout << solve(a) << endl;
    }
}