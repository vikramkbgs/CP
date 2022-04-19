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
    cin>>n;
    int cnt = 0;
    int x = 2020;
    while(x <= n)
    {
        x +=2020;
        cnt++;
    }

    // cout<<cnt<<endl;
    if(cnt >= n%2020)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

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