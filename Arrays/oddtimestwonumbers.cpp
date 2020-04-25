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
        int arr[n];
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
            res ^= x;
        }
        int x = 0, y = 0;
        int setbit = res & ~(res - 1);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] & setbit)
            {
                x ^= arr[i];
            }
            else
            {
                y ^= arr[i];
            }
        }
        cout << x << " " << y << endl;
    }
}