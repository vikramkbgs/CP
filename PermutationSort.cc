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
    read(a);
    int copya[n];
    for(int i =0; i<n; i++)
        copya[i] = a[i];
    sort(a, a+n);
    int cnt = 0;

    for(int i =0; i<n; i++)
    {
        if(a[i] != copya[i])
        cnt++;
    }

    if(cnt == 0)
    cout<<0<<endl;
    else if(cnt == 2)
    cout<<1<<endl;
    else
    cout<<2<<endl;
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