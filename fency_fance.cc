/*------------------------------------------------------------Vikram Roy------------------------------------------------------*/
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

// solution of problem
void solve()
{
    int a;
    cin >> a;
    int i = 3;

    if ((a * i) / (i - 2) >= 180)
        while ((a * i) / (i - 2) >= 180)
        {
            if ((float)(a * i) / (i - 2) == (float)180)
            {
                cout << "YES" << endl;
                return;
            }
            i++;
        }
    cout << "NO" << endl;
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