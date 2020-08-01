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
            while ((!s.empty()) && a[s.top()] <= a[i])
            {
                s.pop();
            }
            res[i] = (s.empty()) ? (i + 1) : (i - s.top());
            s.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}