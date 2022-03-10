/*-----------------------------------------------------------Vikram Roy---------------------------------------------------------*/
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
    string s[5] = {"Sheldon", "Leonard",
                   "Penny", "Rajesh", "Howard"};
    int n;
    cin >> n;
    int x = 1;
    while (x * 5 < n)
    {
        n -= 5 * x;
        x *= 2;
    }
    int i = 1;
    while (x * i < n)
        i++;
    cout << s[i - 1] << endl;
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