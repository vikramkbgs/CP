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
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string d, p;
    cin >> d >> p;

    for (int i = 0; i < p.size(); i++)
    {
        size_t found;
        found = s.find(p[i]);

        if (d == "R")
            cout << s[--found];

        if (d == "L")
            cout << s[++found];
    }

    return;
}

int main()
{
    fast();
    solve();

    return 0;
}