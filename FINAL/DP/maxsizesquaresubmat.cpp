#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int dp[n][m];
        int maxres = 0;
        for (int i = 0; i < m; i++)
        {
            dp[0][i] = a[0][i];
            maxres = max(maxres, dp[0][i]);
        }
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = a[i][0];
            maxres = max(maxres, dp[i][0]);
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
                }
                else
                {
                    dp[i][j] = 0;
                }
                maxres = max(maxres, dp[i][j]);
            }
        }
        cout << maxres << endl;
    }
}