#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back
typedef vector<int> vi;
typedef pair<int, int> pi;
// #define endl "\n"
class compare //for priority queue
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
};
bool comp(int a, int b)
{
    return a > b;
}
int power(int a, int b)
{
    int res = 1;
    a = a;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a);
        }
        b /= 2;
        a = (a * a);
    }
    return res;
}
// bool primes[100005];
// vector<int> prime;
// void sieve(int n)
// {
//     primes[2] = false;
//     for (int i = 2; i * i <= 100000; i++)
//     {
//         if (primes[i] == false)
//         {
//             for (int p = i * i; p <= 100000; p += i)
//             {
//                 primes[p] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= 100000; i++)
//     {
//         if (primes[i] == false)
//             prime.push_back(i);
//     }
// }
/* int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
} */
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.pb(x);
        }
        int sum = 0, l = 0, r = 0;
        bool flag = false;
        while (r < n)
        {
            sum += a[r];
            if (sum == k)
            {
                break;
            }
            while (sum > k && l < r)
            {
                sum -= a[l];
                l++;
                if (sum == k)
                {
                    flag = true;
                    break;
                }
            }
            if (flag == true)
                break;
            r++;
        }
        if (sum != k)
            cout << -1 << endl;
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
    }
}