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
    if(n%2 == 0 || m%2 == 0)
    {
        if(n%2)
        cout<<n*m/2<<endl;
        else
        cout<<n/2*m<<endl;
    }
    else
    {
        if(n > 2)
        {
            n--;
            cout<<n/2*m+m/2<<endl;
        }
        else
        {
            m--;
            cout<<m/2*n+n/2<<endl;
        }
    }
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