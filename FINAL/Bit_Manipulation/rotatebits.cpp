#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        cout << "Left ";
        cout << ((n << r) | (n >> (32 - r))) << endl;
        cout << "Right ";
        cout << ((n >> r) | (n << (32 - r))) << endl;
    }
}