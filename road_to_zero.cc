#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x > y)
            swap(x, y);
        ll minDollar = a * (y - x) + b * x;
        if (a * (x + y) < minDollar)
            cout << a * (x + y) << endl;
        else
            cout << minDollar << endl;
    }
    return 0;
}