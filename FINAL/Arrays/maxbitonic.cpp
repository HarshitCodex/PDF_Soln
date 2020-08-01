#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main()
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
        int left[n], right[n];
        left[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                left[i] = left[i - 1] + 1;
            }
            else
            {
                left[i] = 1;
            }
        }
        right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                right[i] = right[i + 1] + 1;
            }
            else
            {
                right[i] = 1;
            }
        }
        int maxval = 1;
        for (int i = 0; i < n; i++)
        {
            maxval = max(maxval, left[i] + right[i] - 1);
        }
        cout << maxval << endl;
    }
}