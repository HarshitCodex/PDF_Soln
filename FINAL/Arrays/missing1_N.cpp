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
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            res ^= x;
        }
        for (int i = 1; i <= n; i++)
            res ^= i;
        cout << res << endl;
    }
}