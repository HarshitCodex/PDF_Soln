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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pos = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int newpos = pos + 1;
        int val = a[newpos];
        for (int i = newpos; i < n; i++)
        {
            if (a[i] < val && a[i] > a[pos])
            {
                val = a[i];
                newpos = i;
            }
        }
        swap(a[newpos], a[pos]);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}