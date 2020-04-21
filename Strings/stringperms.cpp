#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
void perm(string s, int l, int r)
{
    if (l == r)
        cout << s << endl;
    for (int i = l; i <= r; i++)
    {
        swap(s[i], s[l]);
        perm(s, l + 1, r);
        swap(s[i], s[l]);
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        perm(s, 0, s.length() - 1);
    }
}