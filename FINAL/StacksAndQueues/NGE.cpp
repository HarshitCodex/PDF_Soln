#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> s;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            while ((!s.empty()) && a[s.top()] < a[i])
            {
                res[s.top()] = a[i];
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            res[s.top()] = -1;
            s.pop();
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}