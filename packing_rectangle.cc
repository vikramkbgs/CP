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
ll w, h, n;

bool good(ll x)
{
    return (x/w)*(x/h) >= n;
}


void solve()
{
   cin>>w>>h>>n;
    ll l = 0, r = 1;

    while(!good(r)) r *=2;
    
    while (l+1 < r)
    {
       ll mid = (l+r)/2;
       if(good(mid))
       r = mid;
       else
       l = mid; 
    }
    cout<<r<<endl;
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