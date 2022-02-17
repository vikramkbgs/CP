#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll x, y, z;
        cin >> x >> y >> z;

        if ((x * y) - y <= z)
            cout << (x * (x - 1)) / 2 << endl;
        else
        {
            ll cnt = min(z / y, x);
            cout << (x - cnt) * cnt + ((cnt * (cnt - 1)) / 2) << endl;
        }
    }
    return 0;
}
