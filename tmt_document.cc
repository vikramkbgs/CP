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
    vector<int> t, m;
    for (int i = 0; i < n; i++)
    {
        char temp;
        cin >> temp;
        if (temp == 'T')
            t.pb(i);
        else
            m.pb(i);
    }
    if (t.size() != 2 * m.size())
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] < t[i] || m[i] > t[i + m.size()])
            {
                cout << "NO" << endl;
                return;
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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}