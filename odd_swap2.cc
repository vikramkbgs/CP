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
    int a[n] = {0};
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i - 1] <= a[i])
        {
            continue;
        }
        else
        {
            if (a[i - 1] % 2 == 0 && a[i] % 2 == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else if (a[i - 1] % 2 && a[i] % 2)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                swap(a[i - 1], a[i]);
            }
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}