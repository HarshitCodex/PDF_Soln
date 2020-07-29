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
        vector<int> a(n + 2);
        int freq[n + 1] = {0};
        for (int i = 0; i < n + 2; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            if (freq[a[i]] > 1)
                cout << a[i] << " ";
        }
        cout << endl;
    }
}