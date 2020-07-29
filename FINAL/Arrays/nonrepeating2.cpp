#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = 0;
        int n;
        cin >> n;
        // n = 2 * n + 2;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            res ^= a[i];
        }
        int setbit = res & ~(res - 1);
        int x, y;
        x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] & setbit)
                x ^= a[i];
        }
        cout << max(x, res ^ x) << " " << min(x, (res ^ x)) << endl;
    }
}