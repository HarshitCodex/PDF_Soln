#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int countbits(int n)
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
        int a, b;
        cin >> a >> b;
        int num = a ^ b;
        cout << countbits(num) << endl;
    }
}