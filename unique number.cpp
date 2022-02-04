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

        if (n > 45)
        {
            cout << -1 << endl;
            continue;
        }

        stack<int> result;
        int num = 9;
        while (n > 0)
        {
            if (num <= n)
            {
                result.push(num);
                n -= num--;
            }
            else
                num--;
        }

        while (!result.empty())
        {
            cout << result.top();
            result.pop();
        }
        cout << "\n";
    }

    return 0;
}