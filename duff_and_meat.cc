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
    cin >> n;
    int mneed, mprice;
    cin>>mneed>>mprice;
    int mn = mprice;
    ll toatlcost = 0;
    toatlcost += mneed*mprice;
    for(int i =1; i<n; i++)
    {
      cin>>mneed>>mprice;
      if(mn > mprice)
      mn = mprice;
      toatlcost += mn * mneed;
    }
    cout<<toatlcost<<endl;
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