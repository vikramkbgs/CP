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
    string s;
    cin >> s;
    int countL = 0, mx = 0;
    char cL = 'L';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == cL)
            countL++;
        else
            countL = 0;
        if (mx < countL)
            mx = countL;
    }
    cout << mx + 1 << endl;
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