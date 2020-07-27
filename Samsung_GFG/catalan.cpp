#include <bits/stdc++.h>
using namespace std;
int binco(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    res /= (k + 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << binco(2 * n, n) << endl;
    }
}