#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = i;
            while (l < n && r >= 0)
            {
                cout << a[l][r] << " ";
                l++;
                r--;
            }
            cout << endl;
        }
        for (int i = 1; i < n; i++)
        {
            int l = i, r = n - 1;
            while (l < n && r >= 0)
            {
                cout << a[l][r] << " ";
                l++;
                r--;
            }
            cout << endl;
        }
    }
    return 0;
}