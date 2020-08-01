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
        multiset<int> set1;
        set1.insert(a[0]);
        int invcnt = 0;
        for (int i = 1; i < n; i++)
        {
            set1.insert(a[i]);
            auto it = set1.upper_bound(a[i]);
            invcnt += distance(it, set1.end());
        }
        cout << invcnt << endl;
    }
}