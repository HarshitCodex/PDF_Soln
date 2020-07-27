#include <bits/stdc++.h>
using namespace std;
int findpivot(int a[], int n, int l, int r)
{
    if (r < l)
        return -1;
    if (l == r)
        return l;
    int mid = (l + r) / 2;
    if (mid + 1 < n && a[mid] > a[mid + 1])
        return mid;
    else if (a[mid] < a[l])
        return findpivot(a, n, l, mid - 1);
    else if (a[mid] > a[r])
    {
        return findpivot(a, n, mid + 1, r);
    }
    else
    {
        return -1;
    }
}
int bsearch(int a[], int l, int r, int key)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (a[m] == key)
        return m;
    else if (key > a[m])
        return bsearch(a, m + 1, r, key);
    return bsearch(a, l, m - 1, key);
}
int pivotbsearch(int a[], int n, int key, int pivotpos)
{
    if (pivotpos == -1)
        return bsearch(a, 0, n - 1, key);
    if (a[pivotpos] == key)
        return pivotpos;
    else if (key >= a[0])
        return bsearch(a, 0, pivotpos, key);
    return bsearch(a, pivotpos + 1, n - 1, key);
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
    int pivotpos = findpivot(a, n, 0, n - 1);
    cout << pivotpos << endl;
    int key;
    cin >> key;
    cout << pivotbsearch(a, n, key, pivotpos) << endl;
}