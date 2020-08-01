#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main()
{
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
        int max_so_far = 0, max_prod = 1, min_prod = 1;
        bool flag = false;
        int val = *max_element(a.begin(), a.end());
        if (val == 0)
        {
            cout << val << endl;
            continue;
        }
        else if (val < 0 && n == 1)
        {
            cout << val << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                min_prod = min(min_prod * a[i], 1ll) % mod;
                max_prod = max(max_prod * a[i], 1ll) % mod;
            }
            else if (a[i] == 0)
            {
                min_prod = 1;
                max_prod = 1;
            }
            else
            {
                int temp = min_prod;
                min_prod = min(max_prod * a[i], 1ll) % mod;
                max_prod = max(temp * a[i], 1ll) % mod;
            }
            max_so_far = max(max_prod, max_so_far);
        }
        cout << max_so_far % mod << endl;
    }
}