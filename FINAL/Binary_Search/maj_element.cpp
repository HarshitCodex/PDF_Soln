#include <bits/stdc++.h>
using namespace std;
int findmajor(int a[], int n, int x)
{
    int t = upper_bound(a, a + n, x) - lower_bound(a, a + n, x);
    if (t > n / 2)
        return 1;
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int maj = findmajor(a, n, x);
    if (maj == -1)
        cout << "NO Majority" << endl;
    else
    {
        cout << "YES MAJORITY" << endl;
    }
}