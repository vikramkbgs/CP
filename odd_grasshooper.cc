/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define read(x)           \
    for (auto &(i) : (x)) \
    cin >> i
#define write(x)          \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// solution of problem
void solve()
{
    ll x, jumps;
    cin >> x >> jumps;
    ll flag = jumps - jumps % 4;
    if (x % 2)
    {
        if (jumps % 4 > 0)
        {
            x = x + flag + 1;
            if (jumps % 4 > 1)
            {
                x = x - (flag + 2);
            }
            if (jumps % 4 > 2)
            {
                x = x - (flag + 3);
            }
        }
        cout << x << endl;
    }
    else
    {
        if (jumps % 4 > 0)
        {
            x = x - (flag + 1);
            if (jumps % 4 > 1)
            {
                x = x + (flag + 2);
            }
            if (jumps % 4 > 2)
            {
                x = x + (flag + 3);
            }
        }
        cout << x << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}