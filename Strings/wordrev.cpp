#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s = " ";
        for (int i = 0; i < k; i++)
        {
            string p;
            cin >> p;
            s.append(p);
            if (i != k - 1)
                s += ' ';
        }
        stack<char> rev;
        reverse(s.begin(), s.end());
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                while (!rev.empty())
                {
                    cout << rev.top();
                    rev.pop();
                }
                cout << " ";
            }
            else
            {
                rev.push(s[i]);
            }
        }
        while (!rev.empty())
        {
            cout << rev.top();
            rev.pop();
        }
        cout << endl;
    }
}