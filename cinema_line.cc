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
    int COIN_25 = 0, COIN_50 = 0, COIN_100 = 0;
    int a[n];
    read(a);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
            COIN_25++;

        if (a[i] == 50 && COIN_25 <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        else if (a[i] == 50 && COIN_25 - 1 >= 0)
        {
            COIN_25--;
            COIN_50++;
        }

        if ((a[i] == 100 && (COIN_25 <= 0 && COIN_50 <= 0)) ||
            a[i] == 100 && (COIN_25 - 3 <= 0))
        {
            cout << "NO" << endl;
            return;
        }
        else if (a[i] == 100 && (COIN_25 > 0 && COIN_50 > 0) ||
                 a[i] == 100 && (COIN_25 >= 3))
        {
            if (COIN_25 > 0 && COIN_50 > 0)
            {
                COIN_50--;
                COIN_25--;
            }
            else if (COIN_50 == 0 && COIN_25 >= 3)
            {
                COIN_25 = COIN_25 - 3;
            }
            COIN_100++;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}