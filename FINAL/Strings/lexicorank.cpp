#include <bits/stdc++.h>
using namespace std;
int findsmallerinright(string s, int low, int high)
{
    int cnt = 0, i;
    for (i = low + 1; i <= high; i++)
    {
        if (s[i] < s[low])
            cnt++;
    }
    return cnt;
}
int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 1;
        int n = s.length();
        int mul = fact(n);
        for (int i = 0; i < n; i++)
        {
            mul /= (n - i);
            int cntright = findsmallerinright(s, i, n - 1);
            cnt += cntright * mul;
        }
        cout << cnt << endl;
    }
}