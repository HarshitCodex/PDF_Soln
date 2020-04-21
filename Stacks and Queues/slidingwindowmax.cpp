#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
void maxwin(int n, int arr[], int k, int S[])
{
    deque<int> q(k);
    int i;
    for (i = 0; i < k; i++)
    {
        while ((!q.empty()) && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    int j = 0;
    for (; i < n; i++)
    {
        S[j] = arr[q.front()];
        j++;
        while ((!q.empty()) && q.front() <= i - k)
            q.pop_front();
        while ((!q.empty()) && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    S[j] = arr[q.front()];
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s[n - k + 1];
        maxwin(n, a, k, s);
        for (int i = 0; i < n - k + 1; i++)
        {
            cout << s[i] << " ";
        }
    }
}