#include <bits/stdc++.h>
using namespace std;
void reverseprint(string s)
{
    if (s.length() == 1)
    {
        cout << s;
        return;
    }
    else
    {
        /* code */
        reverseprint(s.substr(1));
        cout << s[0];
        return;
    }
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
        reverseprint(s);
        cout << endl;
    }
}