#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0;
        bool flag = false;
        while (i < n - 1)
        {
            while (i < n - 1 && a[i] >= a[i + 1])
            {
                i++;
            }
            int buy = i;
            i++;
            if (i == n)
                break;
            flag = true;
            while (i < n && a[i] > a[i - 1])
            {
                i++;
            }
            int sell = i - 1;
            cout << "(" << buy << " " << sell << ") ";
        }
        if (flag == false)
            cout << "No Profit";
        cout << endl;
    }
}