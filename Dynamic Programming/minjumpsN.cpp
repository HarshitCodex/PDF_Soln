#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int min(int a, int b, int c)
{
    return min(a, min(b, c));
}
int minjump(int n, int arr[])
{
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int maxreach = arr[0];
    int step = arr[0];
    int jump = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;
        maxreach = max(maxreach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= maxreach)
            {
                return -1;
            }
            step = maxreach - i;
        }
    }
    return -1;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = minjump(n, arr);
        cout << res << endl;
    }
}