#include <bits/stdc++.h>
using namespace std;
int countbits(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n &= (n - 1);
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (countbits(n) == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}