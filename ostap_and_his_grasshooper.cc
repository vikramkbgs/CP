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
    int n, k;
    cin >> n >> k;
    char s[n];
    int start, target, flag = 1, found = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 'G')
            start = i;

        if (s[i] == 'T')
            target = i;
    }

    if (start < target)
    {
        for (int i = start; i <= target; i = i + k)
        {
            if (s[i] == '#')
            {
                flag = 0;
                break;
            }

            if (s[i] == 'T')
                found = 1;
        }
    }
    else
    {
        for (int i = start; i >= target; i = i - k)
        {
            if (s[i] == '#')
            {
                flag = 0;
                break;
            }

            if (s[i] == 'T')
                found = 1;
        }
    }

    if (flag && found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fast();
    solve();

    return 0;
}