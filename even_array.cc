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
    int n;
    cin >> n;
    int nOdd, nEven, a[n];
    nOdd = nEven = 0;
    read(a);

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % 2 == 0)
            nEven++;
    }
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % 2)
            nOdd++;
    }
    if (nOdd == nEven)
        cout << nOdd << endl;
    else
        cout << -1 << endl;

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