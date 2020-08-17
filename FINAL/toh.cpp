#include <bits/stdc++.h>
using namespace std;
void toh(int n, int src, int aux, int dest, int &cnt)
{
    if (n == 0)
        return;
    toh(n - 1, src, dest, aux, cnt);
    cnt++;
    cout << "move disk " << n << " from rod " << src << " to rod " << dest << endl;
    toh(n - 1, aux, src, dest, cnt);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int src = 1, aux = 2, dest = 3;
        int cnt = 0;
        toh(n, src, aux, dest, cnt);
        cout << cnt << endl;
    }
}