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
int matrixchain(int p[], int n)
{
    int m[n][n];
    int i, j, k, L, q;
    //m[i,j] = Minimum number of scalar
    //multiplications needed to compute A[i]....A[j]
    //where dimension of A[i] is p[i-1]*p[i]

    for (i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }
    for (L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = LONG_LONG_MAX;
            for (k = i; k < j; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                }
            }
        }
    }
    return m[1][n - 1];
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << matrixchain(arr, n) << endl;
    }
}