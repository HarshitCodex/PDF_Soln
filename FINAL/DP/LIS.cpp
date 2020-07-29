#include <bits/stdc++.h>
using namespace std;
int lis(int a[], int n)
{
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    return *max_element(dp, dp + n);
}
int lisnlogn(int a[], int n)
{
    vector<int> I;
    int l[n];
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(I.begin(), I.end(), a[i]);
        if (it == I.end())
        {
            I.push_back(a[i]);
        }
        else
        {
            *it = a[i];
        }
        l[i] = it - I.begin() + 1;
    }
    return I.size();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << lis(a, n) << endl;
        cout << lisnlogn(a, n) << endl;
    }
}