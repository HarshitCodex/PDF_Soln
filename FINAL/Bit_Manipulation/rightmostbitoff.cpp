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
        if (n == 0)
            cout << "No set bit" << endl;
        else
        {
            cout << (n & (n - 1)) << endl;
        }
    }
}
// 1 1 1 1
// 1 1 1 0

// 1 1 0 0
// 1 0 1 1