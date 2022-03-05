/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
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
    ll n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i <= n; i += b)
    {
        if ((n - i) % a == 0)
        {
            cout << "YES" << endl;
            cout << (n - i) / a << ' ' << i / b;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    fast();
    solve();

    return 0;
}