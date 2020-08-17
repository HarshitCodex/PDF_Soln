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
        vector<int> arrive(n), depart(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arrive[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> depart[i];
        }
        sort(arrive.begin(), arrive.end());
        sort(depart.begin(), depart.end());
        int plats = 1, res = 1, i = 1, j = 0;
        while (i < n && j < n)
        {
            if (arrive[i] <= depart[j])
            {
                plats++;
                i++;
            }
            else if (arrive[i] > depart[j])
            {
                plats--;
                j++;
            }
            res = max(res, plats);
        }
        cout << res << endl;
    }
}