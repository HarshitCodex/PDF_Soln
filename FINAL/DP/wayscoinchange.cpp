#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, V;
        cin >> n >> V;
        int coins[n];
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }
        int dp[V + 1][n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 1;
        }
        for (int i = 1; i <= V; i++)
        {
            dp[i][0] = 0;
        }
        for (int v = 1; v <= V; v++)
        {
            for (int i = 1; i <= n; i++)
            {
                dp[v][i] = dp[v][i - 1] + ((v - coins[i - 1] >= 0) ? dp[v - coins[i - 1]][i] : 0);
            }
        }
        cout << dp[V][n] << endl;
    }
}