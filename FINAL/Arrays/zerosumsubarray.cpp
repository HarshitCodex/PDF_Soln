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
        vector<int> sum = {0};
        map<int, int> mp;
        mp[0] = 1;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum.push_back(sum.back() + a[i]);
            // cout << sum[i + 1] << " ";
            if (flag == true)
                continue;
            if (mp.find(sum[i + 1]) != mp.end())
            {
                flag = true;
            }
            mp[sum[i + 1]] = 1;
        }
        if (flag)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}
