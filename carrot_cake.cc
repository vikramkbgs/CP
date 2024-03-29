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
    int n, t, k, b;
    cin >> n >> t >> k >> b;
    int singleoven = n / k * t;
    int doubleoven = 0;
    int x = 1;
    while (doubleoven < n)
    {
        if (x % t == 0)
            doubleoven += k;
        if ((x - b) % (t) == 0 && x > b)
            doubleoven += k;
        x++;
    }
    if (x - 1 < singleoven)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}