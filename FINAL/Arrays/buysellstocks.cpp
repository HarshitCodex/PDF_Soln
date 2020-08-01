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
        int price[n];
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        int i = 0;
        int res = 0;
        while (i < n - 1)
        {
            while (i < n - 1 && price[i] >= price[i + 1])
                i++;
            if (i == n - 1)
                break;
            int buy = i++;
            while (i < n && price[i] >= price[i - 1])
            {
                i++;
            }
            int sell = i - 1;
            res += price[sell] - price[buy];
            cout << '(' << buy << " " << sell << ')' << " ";
        }
        if (res == 0)
            cout << "No Profit" << endl;
        else
        {
            cout << endl;
        }
    }
}