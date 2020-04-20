#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
unsigned int getabs(int n)
{
    int mask = n >> (sizeof(int) * 8 - 1);
    return (n + mask) ^ mask;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << getabs(n) << endl;
    }
}