#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int min(int a, int b, int c)
{
    return min(a, min(b, c));
}
int maxsquare(int n, int m, int mat[1005][1005])
{
    int cost[n][m];
    cost[0][0] = mat[0][0];
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        cost[i][0] = mat[i][0];
        mx = max(mx, cost[i][0]);
    }
    for (int j = 1; j < m; j++)
    {
        cost[0][j] = mat[0][j];
        mx = max(mx, cost[0][j]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == 1)
                cost[i][j] = mat[i][j] + min(cost[i - 1][j], cost[i][j - 1], cost[i - 1][j - 1]);
            else
            {
                cost[i][j] = 0;
            }
            mx = max(mx, cost[i][j]);
        }
    }
    return mx;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mat[n][1005];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        cout << "Biggest square is : " << maxsquare(n, m, mat) << endl;
    }
}