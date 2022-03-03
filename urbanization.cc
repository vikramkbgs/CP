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
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    int a[n];
    input(a);

    sort(a, a + n, greater<int>());
    double am1, am2, sum;

    int i = 0;
    for (i = 0; i < min(n1, n2); i++)
        sum += a[i];

    am1 = sum / min(n1, n2);
    sum = 0;

    for (i = i; i < max(n1, n2) + min(n1, n2); i++)
        sum += a[i];
    am2 = sum / max(n1, n2);

    cout << fixed << setprecision(8) << (am1 + am2) << endl;

    return;
}

int main()
{
    fast();
    solve();

    return 0;
}