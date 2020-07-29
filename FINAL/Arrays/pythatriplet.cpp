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
        int n, k;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a.begin(), a.end());
        bool flag = false;
        for (int i = n - 1; i >= 2; i--)
        {
            int l = 0, r = i - 1;
            while (l < r)
            {
                int sum = a[l] + a[r];
                if (sum == a[i])
                {
                    flag = true;
                    break;
                }
                if (sum < a[i])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}