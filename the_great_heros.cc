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
    int a, h, n;
    cin>>a>>h>>n;
    int ma[n], mh[n];
    read(ma);
    read(mh);

    vector<pair<int, int>>mah;
    for(int i =0; i<n; i++)
    {
        mah.pb({ma[i], mh[i]});
    }
    sort(mah.begin(), mah.end());
    for(int i =0; i<n-1; i++)
    {
        int fight = (mah[i].second+a-1)/a;
        h -= fight*mah[i].first;
         cout<<"fight: "<<fight<<endl;
    }
    if(h <= 0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}