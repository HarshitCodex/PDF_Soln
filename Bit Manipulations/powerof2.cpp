#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int check(int n)
{
    int cnt = 0;
    while (n)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cntset = check(n);
        if (cntset == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}