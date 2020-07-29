#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int dp[n][n];
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 0;
            }
            else
            {
                dp[i][i + 1] = 1;
            }
        }
        for (int i = 2; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                int h = j + i;
                if (s[j] == s[h])
                {
                    dp[j][h] = dp[j + 1][h - 1];
                }
                else
                {
                    dp[j][h] = 1 + min(dp[j + 1][h], dp[j][h - 1]);
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout << dp[0][n - 1] << endl;
    }
}