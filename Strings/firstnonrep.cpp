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
        string s;
        cin >> s;
        pair<int, int> f[26];
        for (int i = 0; i < 26; i++)
        {
            f[i] = {0, -1};
        }
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (f[s[i] - 'a'].first == 0)
            {
                f[s[i] - 'a'].first++;
                f[s[i] - 'a'].second = i;
            }
            else
            {
                f[s[i] - 'a'].first++;
            }
        }
        int minval = LONG_LONG_MAX;
        int mindex = LONG_LONG_MAX;
        for (int i = 0; i < 26; i++)
        {
            if (f[i].first == 1 && f[i].second < minval)
            {
                minval = f[i].second;
                mindex = i;
            }
        }
        cout << (char)('a' + mindex) << endl;
    }
}