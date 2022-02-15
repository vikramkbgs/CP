#include <bits/stdc++.h>
#define sz(x) (x).size()
#define ll long long
using namespace std;

int main()
{
    ll x, y, z;
    cin >> x >> y >> z;

    ll coconut = x / z + y / z;
    ll csas = x % z;
    ll cman = y % z;

    if ((csas + cman >= z))
        cout << coconut + 1 << " " << z - max(csas, cman) << endl;
    else
        cout << coconut << " " << 0 << endl;

    return 0;
}