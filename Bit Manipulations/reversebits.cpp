#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
//#define int long long
unsigned int revbit(unsigned int n)
{
    unsigned int bittot = sizeof(n) * 8;
    //cout << bittot << endl;
    unsigned int rev = 0, i, temp;
    for (i = 0; i < bittot; i++)
    {
        temp = (n & (1 << i));
        //cout << (temp == 0 ? 0 : 1) << " ";
        if (temp != 0)
        {
            rev |= (1 << ((bittot - 1) - i));
        }
    }
    return rev;
}
unsigned int revbitm2(unsigned int n)
{
    unsigned int bittot = sizeof(n) * 8 - 1;
    unsigned int rev = n;
    n >>= 1;
    while (n)
    {
        rev <<= 1;
        rev |= (n & 1);
        n >>= 1;
        bittot--;
    }
    rev <<= bittot;
    return rev;
}
int32_t main()
{
    unsigned int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        cout << revbit(n) << " " << revbitm2(n) << endl;
    }
}