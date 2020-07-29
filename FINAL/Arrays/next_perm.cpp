#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (is_sorted(a.rbegin(), a.rend()))
        {
            for (auto it = a.rbegin(); it != a.rend(); it++)
            {
                cout << *it << " ";
            }
        }
        else
        {
            bool flag = next_permutation(a.begin(), a.end());
            for (auto it = a.begin(); it != a.end(); it++)
            {
                cout << *it << " ";
            }
        }
        cout << endl;
    }
}