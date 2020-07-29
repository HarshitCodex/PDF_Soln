#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int smallest[n];
        smallest[0] = a[0];
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            smallest[i] = min(smallest[i - 1], a[i]);
            res = max(res, (a[i] - smallest[i]));
        }
        if (is_sorted(a.rbegin(), a.rend()))
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}