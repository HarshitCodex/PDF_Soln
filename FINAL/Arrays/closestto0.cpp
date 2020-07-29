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
        int mindiff = INT_MAX;
        sort(a.begin(), a.end());
        int l = 0, r = n - 1;
        int b1, b2;
        while (l < r)
        {
            if (abs(a[l] + a[r]) < mindiff)
            {
                b1 = a[l];
                b2 = a[r];
                mindiff = abs(a[l] + a[r]);
            }
            if (a[l] + a[r] < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << b1 + b2 << endl;
    }
}
