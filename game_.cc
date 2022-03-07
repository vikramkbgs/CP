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
    int count = 0, mx = 0, count_0 = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 0)
        {
            count++;
            count_0++;
        }
        else
            count = 0;

        if (mx <= count)
            mx = count;
    }
    if (mx < count_0)
        cout << n - 1 << endl;
    else if (mx == 0 && count_0 == 0)
        cout << 0 << endl;
    else
        cout << mx + 1 << endl;
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