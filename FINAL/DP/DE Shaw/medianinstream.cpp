#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        priority_queue<int> maxheap;
        priority_queue<int, vector<int>, greater<int>> minheap;
        int n;
        cin >> n;
        int median;
        int a;
        cin >> a;
        median = a;
        maxheap.push(a);
        cout << median << endl;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (maxheap.size() > minheap.size())
            {
                if (x < median)
                {
                    minheap.push(maxheap.top());
                    maxheap.pop();
                    maxheap.push(x);
                }
                else
                {
                    minheap.push(x);
                }
                median = (maxheap.top() + minheap.top()) / 2;
            }
            else if (maxheap.size() == minheap.size())
            {
                if (x < median)
                {
                    maxheap.push(x);
                    median = maxheap.top();
                }
                else
                {
                    minheap.push(x);
                    median = minheap.top();
                }
            }
            else
            {
                if (x > median)
                {
                    maxheap.push(minheap.top());
                    minheap.pop();
                    minheap.push(x);
                }
                else
                {
                    maxheap.push(x);
                }
                median = (maxheap.top() + minheap.top()) / 2;
            }
            cout << median << endl;
        }
        // cout << "Maxheap : " << endl;
        // while (!maxheap.empty())
        // {
        //     cout << maxheap.top() << " ";
        //     maxheap.pop();
        // }
        // cout << endl
        //      << "Minheap : " << endl;
        // while (!minheap.empty())
        // {
        //     cout << minheap.top() << " ";
        //     minheap.pop();
        // }
    }
}