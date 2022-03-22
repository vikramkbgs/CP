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
    ll sum = 0;
    cin>>n;
    if(n == 1)
    {
        int temp;
        cin>>temp;
        cout<<0<<endl;
        return;
    }
    else
    {
        int a[n];
        read(a);
        int mx = *max_element(a, a+n);
        for(int i = 0; i<n; i++)
        {
            if(mx - a[i] > 0)
            sum +=mx - a[i];
        }
        cout<<sum<<endl;
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