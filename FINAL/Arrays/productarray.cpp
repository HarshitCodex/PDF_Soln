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
        int leftproduct[n], rightproduct[n];
        leftproduct[0] = 1;
        rightproduct[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            leftproduct[i] = leftproduct[i - 1] * a[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            rightproduct[i] = rightproduct[i + 1] * a[i + 1];
        }
        int result[n];
        for (int i = 0; i < n; i++)
        {
            result[i] = leftproduct[i] * rightproduct[i];
            cout << result[i] << " ";
        }
        cout << endl;
    }
}