#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n >> val;
        int coins[n];
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }
        int dp[val + 1];
        dp[0] = 0;
        for (int v = 1; v <= val; v++)
        {
            dp[v] = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (coins[i] <= v)
                {
                    int subres = dp[v - coins[i]];
                    if (subres != INT_MAX && subres + 1 < dp[v])
                    {
                        dp[v] = subres + 1;
                    }
                }
            }
        }
        cout << dp[val] << endl;
    }
}