#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int leftrotate(int n, int d)
{
    d = d % 64;
    return (n << d) | (n >> (64 - d));
}
int rightrotate(int n, int d)
{
    d = d % 64;
    return (n >> d) | (n << (64 - d));
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        cout << leftrotate(n, d) << " " << rightrotate(n, d) << endl;
    }
}