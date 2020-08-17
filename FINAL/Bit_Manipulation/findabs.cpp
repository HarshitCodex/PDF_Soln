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
        int mask = n >> 31;
        cout << ((mask + n) ^ mask) << endl;
    }
}