#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cost[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        int dp[n];
        for (int i = 0; i < n; i++)
        {
            dp[i] = cost[i];
            for (int j = 0; j < i; j++)
            {
                dp[i] = max(dp[i], dp[j] + dp[i - j - 1]);
            }
        }
        cout << dp[n - 1] << endl;
    }
}