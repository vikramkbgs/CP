/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// function for fast i/o
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return;
}

// solution of problem
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll n = b - a;
    int ans = 1;
    ll start = ++a;

    for (int i = 0; i < n; i++)
    {
        ll temp;

        if (ans == 0)
        {
            ans = 0;
            break;
        }

        if (start > 9)
        {
            temp = start % 10;
        }
        else
        {
            temp = start;
        }

        ans *= temp;

        if (ans > 9)
            ans %= 10;

        start++;
    }
    cout << ans << endl;
    return;
}

int main()
{
    fast();
    solve();

    return 0;
}