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
        cout << log2(n & (-n)) + 1 << endl;
    }
}
// 1 1 1 1
// 1 1 1 0

// 1 1 0 0
// 1 0 1 1