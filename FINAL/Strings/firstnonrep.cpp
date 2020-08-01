#include <bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r)
{
    if (l == r)
    {
        cout << a << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
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
        permute(s, 0, s.length() - 1);
        cout << endl;
    }
}