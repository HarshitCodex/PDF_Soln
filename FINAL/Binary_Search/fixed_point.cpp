#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == mid)
        {
            res = mid;
            break;
        }
        else if (a[mid] > mid)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << endl;
}