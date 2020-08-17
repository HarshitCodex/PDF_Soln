#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int even = n & (0xAAAAAAAA);
        int odd = n & (0x55555555);
        even >>= 1;
        odd <<= 1;
        cout << (even | odd) << endl;
    }
}
// 1 1 1 1
// 1 1 1 0

// 1 1 0 0
// 1 0 1 1

