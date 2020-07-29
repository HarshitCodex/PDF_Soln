#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, W;
        cin >> n >> W;
        int val[n], weight[n];
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        int dp[W + 1][n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 0; i <= W; i++)
        {
            dp[i][0] = 0;
        }
        for (int w = 1; w <= W; w++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (weight[i - 1] <= w)
                {
                    dp[w][i] = max(dp[w][i - 1], dp[w - weight[i - 1]][i - 1] + val[i - 1]);
                }
                else
                {
                    dp[w][i] = dp[w][i - 1];
                }
            }
        }
        cout << dp[W][n] << endl;
    }
}