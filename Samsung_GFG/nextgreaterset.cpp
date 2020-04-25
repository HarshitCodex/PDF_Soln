#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> dig;
    while (n)
    {
        int d = n % 10;
        n /= 10;
        dig.push_back(d);
    }
    reverse(dig.begin(), dig.end());
    n = dig.size();
    /*for (int i = 0; i < n; i++)
    {
        cin >> dig[i];
    }*/
    bool flag = false;
    int mindex = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (dig[i] < dig[i + 1])
        {
            mindex = i;
            flag = true;
            break;
        }
    }
    cout << "mindex = " << mindex << endl;
    int minvalindex = mindex, minval = 1000000007;
    for (int i = mindex + 1; flag == true && i < n; i++)
    {
        cout << "dig[i] = " << dig[i] << "" << endl;
        if (dig[i] > dig[mindex] && minval > dig[i])
        {
            cout << "IN - " << i << " dig[i] = " << dig[i] << endl;
            minvalindex = i;
            minval = dig[i];
        }
    }
    if (flag == true && mindex != minvalindex)
        swap(dig[mindex], dig[minvalindex]);
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        for (int i = 0; i < n; i++)
        {
            cout << dig[i];
        }
        cout << endl;
    }
    else
        cout << "not possible" << endl;
}