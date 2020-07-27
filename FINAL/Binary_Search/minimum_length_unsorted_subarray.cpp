#include <bits/stdc++.h>
using namespace std;
void printunsorted(int arr[], int n)
{
    int l = 0, r = n - 1, i, maxx, minn;
    for (l = 0; l < n - 1; l++)
    {
        if (arr[l] > arr[l + 1])
        {
            break;
        }
    }
    if (l == n - 1)
        cout << "Sorted array!" << endl;
    for (r = n - 1; r > 0; r--)
    {
        if (arr[r] < arr[r - 1])
        {
            break;
        }
    }
    maxx = arr[l], minn = arr[l];
    for (i = l + 1; i <= r; i++)
    {
        maxx = max(maxx, arr[i]);
        minn = min(minn, arr[i]);
    }
    for (i = 0; i < l; i++)
    {
        if (arr[i] > minn)
        {
            l = i;
            break;
        }
    }
    for (i = n - 1; i > r; i--)
    {
        if (arr[i] < maxx)
        {
            r = i;
            break;
        }
    }
    cout << "required subarray from : " << l << " " << r << endl;
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
    printunsorted(a, n);
}