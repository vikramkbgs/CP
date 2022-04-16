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
    cin>>n;
    int a[n];
    read(a);
    sort(a, a+n);
    ll base = 0;
    for(int i =0; i<n/2; i++)
        base += a[i];

    ll height = 0;
    height = accumulate(a, a+n, height) - base;
    // cout<<base<<" base : "<< height<<"height :"<<endl;
    cout<<height*height+base*base<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}