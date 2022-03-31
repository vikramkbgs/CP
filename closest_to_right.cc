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
    int n, k;
    cin>>n>>k;
    int a[n];
    int q[k];
    read(a);
    read(q);
    for(int i =0; i<k; i++)
    {
        int l, r;
        l = -1;
        r = n;
        while (l+1 < r)
        {
            int md = (l+r)/2;
            if(a[md]<q[i])
            l = md;
            else
            r = md;
        }
        cout<<r+1<<endl;
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