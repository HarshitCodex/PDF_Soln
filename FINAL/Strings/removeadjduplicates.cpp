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
        int n = s.length();
        string res = "";
        res += s[0];
        int j = 1;
        char prevchar = '1';
        for (int i = 1; i < n; i++)
        {
            if (s[i] == prevchar)
                continue;
            if (j == 0)
            {
                prevchar = '1';
                res += s[i];
                j++;
                continue;
            }
            if (res[j - 1] == s[i])
            {
                prevchar = s[i];
                res.pop_back();
                j--;
            }
            else
            {
                prevchar = '1';
                res += s[i];
                j++;
            }
        }
        cout << res << endl;
    }
}