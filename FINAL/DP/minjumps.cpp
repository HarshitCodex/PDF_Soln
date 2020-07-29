#include <bits/stdc++.h>
using namespace std;
void minjumps()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < i; j++)
        {
            if (i - j <= arr[j] && dp[j] != INT_MAX && dp[j] + 1 < dp[i])
                dp[i] = dp[j] + 1;
        }
    }
    cout << dp[n - 1] << endl;
}
void minjumpsON()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int jump = 1;
    int step = arr[0];
    int maxreach = arr[0];
    if (arr[0] == 0)
    {
        cout << -1 << endl;
        return;
    }
    int i = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << jump << endl;
            return;
        }
        maxreach = max(maxreach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= maxreach)
            {
                cout << -1 << endl;
                return;
            }
            step = maxreach - i;
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // minjumps();
        minjumpsON();
    }
}