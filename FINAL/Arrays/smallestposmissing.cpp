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
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= n && a[i] >= 1 && a[i] != a[a[i] - 1])
            {
                swap(a[i], a[a[i] - 1]);
                i--;
            }
        }
        int res = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i + 1)
            {
                res = i + 1;
                break;
            }
        }
        cout << res << endl;
    }
}