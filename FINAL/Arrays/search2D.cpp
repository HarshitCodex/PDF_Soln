#include <bits/stdc++.h>
using namespace std;
void check(int n, int **a)
{
    int i = 2, j = 3;
    cout << a[i * n + j] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        cin >> x;
        if (n == 0 || m == 0)
            cout << 0 << endl;
        else
        {
            int smallest = a[0][0], largest = a[n - 1][m - 1];
            if (x < smallest || x > largest)
            {
                cout << 0 << endl;
            }
            else
            {
                bool flag = false;
                int i = 0, j = m - 1;
                while (i < n && j >= 0)
                {
                    if (a[i][j] == x)
                    {
                        cout << 1 << endl;
                        flag = true;
                        break;
                    }
                    else if (x > a[i][j])
                    {
                        i++;
                    }
                    else
                    {
                        j--;
                    }
                }
                if (!flag)
                    cout << 0 << endl;
            }
        }
    }
}