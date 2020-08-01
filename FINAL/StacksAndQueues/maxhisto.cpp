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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> s;
        vector<int> nextsmaller(n, n);
        vector<int> previoussmaller(n, -1);
        for (int i = 0; i < n; i++)
        {
            while ((!s.empty()) && a[s.top()] > a[i])
            {
                nextsmaller[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
            s.pop();
        for (int i = 0; i < n; i++)
        {
            while ((!s.empty()) && a[s.top()] >= a[i])
            {
                s.pop();
            }
            if (!s.empty())
            {
                previoussmaller[i] = s.top();
            }
            s.push(i);
        }
        int maxres = 0;
        for (int i = 0; i < n; i++)
        {
            int width = nextsmaller[i] - previoussmaller[i] - 1;
            int area = width * a[i];
            maxres = max(area, maxres);
        }
        cout << maxres << endl;
    }
}