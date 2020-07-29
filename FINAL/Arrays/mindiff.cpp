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
        int mindiff = INT_MAX;
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            mindiff = min(mindiff, a[i + 1] - a[i]);
        }
        cout << mindiff << endl;
    }
}
