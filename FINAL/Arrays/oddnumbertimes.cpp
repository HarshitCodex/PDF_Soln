#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = 0;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            res ^= x;
        }
        cout << res << endl;
    }
}