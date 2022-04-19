/*------------------------------------------------------------Vikram Roy--------------------------------------------------------*/
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
    int a[n];
    int frqcnt = 0;
    read(a);
    sort(a, a+n);
    int prev = a[0], mx = 1;
    for (int i = 0; i < n; i++)
    {
        if (prev == a[i])
            frqcnt++;
        else
        {
            frqcnt = 1;
        }
        if (mx < frqcnt)
            mx = frqcnt;

        prev = a[i];
    }
    if (n == mx)
    {
        cout << 0 << endl;
    }
    else
    {
        int clone = 0;
        frqcnt = mx;
        while (mx < n)
        {
            mx *= 2;
            clone++;
        }
        cout << clone + (n - frqcnt) << endl;
    }
    return;
}






/*------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}