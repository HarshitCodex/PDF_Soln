#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> mp;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (flag == true)
                continue;
            if (mp.find(k - x) != mp.end())
            {
                flag = true;
            }
            else
            {
                if (mp.find(x) == mp.end())
                    mp[x] = 1;
                else
                {
                    mp[x]++;
                }
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}