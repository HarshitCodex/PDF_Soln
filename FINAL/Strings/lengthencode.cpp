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
        string s;
        cin >> s;
        int cnt = 1;
        int n = s.length();
        char c = s[0];
        string res = "";
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                cout << c << cnt;
                c = s[i];
                cnt = 1;
            }
        }
        cout << c << cnt << endl;
    }
}