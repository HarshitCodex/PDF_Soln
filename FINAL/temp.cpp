#include <bits/stdc++.h>
using namespace std;
int maxSpecialProduct(vector<int> &A)
{
    stack<int> s;
    int n = A.size();
    vector<int> nge(n, -1), pge(n, -1);
    for (int i = 0; i < n; i++)
    {
        while ((!s.empty()) && A[i] > A[s.top()])
        {
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    stack<int> s1;
    for (int i = 0; i < n; i++)
    {
        while ((!s1.empty()) && A[i] >= A[s1.top()])
        {
            s1.pop();
        }
        if (!s1.empty())
        {
            pge[i] = s1.top();
        }
        s1.push(i);
    }
    int maxres = 0;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<nge[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<pge[i]<<" ";
    // }
    // cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if (nge[i] != -1 && pge[i] != -1)
            maxres = max(nge[i] * pge[i], maxres);
    }
    return maxres % 1000000007;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxSpecialProduct(a);
}