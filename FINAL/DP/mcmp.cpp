#include <bits/stdc++.h>
using namespace std;
int mcmp(int p[], int n)
{
    int m[n][n];
    int i, j, k, L, q;
    for (int i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                m[i][j] = min(m[i][j], q);
            }
        }
    }
    return m[1][n - 1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << mcmp(a, n) << endl;
    }
}