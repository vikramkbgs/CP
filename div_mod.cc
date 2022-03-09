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
    int l, r, a, mx = INT_MIN;
    cin >> l >> r >> a;
    ll count1 = ((l / a + l % a) + min((r - l), ((a - 1) - l % a)));
    if (r - l >= a)
    {
        ll countmx2 = r / a + (a - 1);
        ll count3 = r / a + r % a;
        if (countmx2 == count3)
            cout << countmx2 << endl;
        else
            cout << --countmx2 << endl;
        return;
    }
    else
    {
        cout << count1 << endl;
    }
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