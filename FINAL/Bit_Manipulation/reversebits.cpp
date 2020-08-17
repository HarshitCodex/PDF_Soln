#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        unsigned reverse_num = 0;
        unsigned int bits = sizeof(n) * 8;
        for (int i = 0; i < bits; i++)
        {
            int temp = (n & (1 << i));
            if (temp)
            {
                reverse_num |= (1 << ((bits - 1) - i));
            }
        }
        cout << reverse_num << endl;
    }
}