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
        vector<int> arr(n);
        int i;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (i = 0; i < n; i++)
        {
            // cin >> arr[i];
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            else
                cout << abs(arr[i]) << " ";
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                cout << (i + 1) << endl;
                }
    }
}
