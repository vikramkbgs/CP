/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
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

// function for fast i/o
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return;
}

// solution of problem
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0, mx = 0;
    char prev = 'x';

    for (int i = 0; i < n; i++)
    {
        if (prev == s[i])
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count >= 3)
            mx++;
    }

    cout << mx << endl;
    return;
}

int main()
{
    fast();
    solve();

    return 0;
}