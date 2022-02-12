#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> res;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            res.push(i);
    }
    cout << res.top() << " ";
    while (res.size() > 1)
    {
        int last = res.top();
        res.pop();
        int slast = res.top();
        if (last % slast == 0)
            cout << slast << " ";
        else
        {
            res.pop();
            res.push(last);
        }
    }
    return 0;
}