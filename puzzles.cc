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
    int n, m; 
    cin>>n>>m;
    int a[m];
    read(a);
    sort(a, a+m);
    vector<pair<int,pair<int, int>>>x;
    write(a)<<" ";
    cout<<endl;
    for(int i =1; i<m;i++)
    {
        int temp = a[i]-a[i-1];
        x.pb({temp,{a[i], a[i-1]}});
    }
   // sort(x.begin(), x.end());
    for(int i =0; i<x.size(); i++)
    cout<<x[i].first<<" ";
    cout<<"\n"<<(x[0].second).second<<"test :";
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