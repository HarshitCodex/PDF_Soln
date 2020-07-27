#include <bits/stdc++.h>
using namespace std;
int bsearch(int a[], int n, int l, int r)
{
    if (l == r)
        return a[l];
    int mid = (l + r) / 2;
    if (r == l + 1 && a[l] >= a[r])
    {
        return a[l];
    }
    if (r == l + 1 && a[l] < a[r])
        return a[r];
    if (a[mid] > a[mid + 1] && a[mid] < a[mid - 1])
        return bsearch(a, n, l, mid - 1);
    else
    {
        return bsearch(a, n, mid + 1, r);
    }
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
    cout << bsearch(a, n, 0, n - 1) << endl;
}