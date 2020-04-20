#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int lcs(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    int LCS[n + 1][m + 1];
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                LCS[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
            {
                LCS[i][j] = 1 + LCS[i - 1][j - 1];
                result = max(result, LCS[i][j]);
            }
            else
            {
                LCS[i][j] = 0;
            }
        }
    }
    return result;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int res = lcs(s1, s2);
        cout << res << endl;
    }
}