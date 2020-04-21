#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
void rev(string s)
{
    if (s.length() == 0)
        return;
    else
        rev(s.substr(1));
    cout << s[0];
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        rev(s);
    }
}