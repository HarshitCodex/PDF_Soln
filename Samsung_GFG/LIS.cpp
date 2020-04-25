#include <bits/stdc++.h>
using namespace std;
int lislen(int n, int arr[])
{
    int lis[n];
    for (int i = 0; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    return lis[n - 1];
}
int lislogn(int n, int arr[])
{
    vector<int> I, L(n);
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(I.begin(), I.end(), arr[i]);
        int index = it - I.begin();
        if (it == I.end())
        {
            I.push_back(arr[i]);
        }
        else
            I[index] = arr[i];
        L[i] = index + 1;
    }
    for (int i = 0; i < n; i++)
        cout << L[i] << " ";
    cout << endl;
    return I.size();
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << lislen(n, arr) << " " << lislogn(n, arr) << endl;
}