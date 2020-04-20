#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define int long long
char f(char s)
{
    if (s == '(')
        return ')';
    else if (s == '[')
        return ']';
    else
        return '}';
}
bool isValid(string s)
{
    stack<char> brk;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            brk.push(s[i]);
        else
        {
            if (brk.empty() || (f(brk.top()) != s[i]))
            {
                return false;
            }
            else
                brk.pop();
        }
    }
    if (brk.empty())
        return true;
    return false;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool val = isValid(s);
        cout << (val ? "True" : "False") << endl;
    }
}