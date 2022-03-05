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
    int n, m;
    cin >> n >> m;
    int HASHMAP[m + 1] = {0};
    HASHMAP[0] = 1;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int j = 0;

        while (HASHMAP[j] && j <= a)
        {
            j++;
        }

        if (--j == a)
        {
            while (j <= b)
            {
                HASHMAP[j] = 1;
                j++;
            }
        }
    }

    for (int i = 0; i < m + 1; i++)
    {
        if (HASHMAP[i])
            continue;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

    return;
}

int main()
{
    fast();
    solve();

    return 0;
}