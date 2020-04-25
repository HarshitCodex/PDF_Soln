#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int i = 0, j = 0, k = 0;
        vector<int> res;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                res.push_back(a[i]);
                i++;
                k++;
            }
            else
            {
                res.push_back(b[j]);
                j++;
                k++;
            }
        }
        while (i < n)
        {
            res.push_back(a[i]);
            i++;
            k++;
        }
        while (j < m)
        {
            res.push_back(b[j]);
            j++;
            k++;
        }
        for (int p = 0; p < k; p++)
        {
            cout << res[p] << " ";
        }
        cout << endl;
    }
}