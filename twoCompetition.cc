#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll maxteam = (a + b) / 4;

        if (a >= maxteam && b >= maxteam)
            cout << maxteam << endl;
        else
            cout << min(a, min(b, maxteam)) << endl;
    }

    return 0;
}
