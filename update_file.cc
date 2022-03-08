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
    ll n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    int tk = log2(k) + 1; // time take to install first k
    int tlast = (n - (1LL << tk) + k - 1) / k;
    if (k == n)
    {
        cout << tk << endl;
        return;
    }
    cout << tk + tlast << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}