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
    int p, c;
    cin>>p>>c;
    int a[p];
    read(a);
    sort(a, a+p);
    ll sum = 0;
    sum = 2 * a[0] + 1;
    for(int i = 1; i< p-1; i++)
    {
        sum += a[i]+1;
        if(sum > c)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if(a[0] < a[p-1] && (sum+abs(a[0]-a[p-1])+1 > c ))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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