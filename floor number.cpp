#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n <= 2)
            cout << 1 << endl;
        else
        {
            n = n - 2;
            cout << 1 + (n + x - 1) / x << endl;
            ;
        }
    }
    return 0;
}