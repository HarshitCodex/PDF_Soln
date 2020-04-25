#include <bits/stdc++.h>
using namespace std;
int eggdrop(int n, int k)
{
    int eggfloor[n + 1][k + 1];
    int res;
    int i, j, x;
    for (i = 1; i <= n; i++)
    {
        eggfloor[i][1] = 1;
        eggfloor[i][0] = 0;
    }
    for (j = 1; j <= k; j++)
    {
        eggfloor[1][j] = j;
    }
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= k; j++)
        {
            eggfloor[i][j] = INT_MAX;
            for (x = 1; x <= j; x++)
            {
                res = 1 + max(eggfloor[i - 1][x - 1], eggfloor[i][j - x]);
                if (res < eggfloor[i][j])
                {
                    eggfloor[i][j] = res;
                }
            }
        }
    }
    return eggfloor[n][k];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << eggdrop(n, k) << endl;
    }
}