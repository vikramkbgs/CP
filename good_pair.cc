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
    int mn, mx;
    mn = INT_MAX;
    mx = INT_MIN;
    int i, j;
    for(int k = 0; k<n; k++)
    {
        int temp;
        cin>>temp;
        if(mn >= temp)
        {
            mn = temp;
            i = k+1;
        }
        if (mx <= temp)
        {
            mx = temp;
            j = k + 1;
        }
    }
    cout<<i<<" "<<j<<endl;
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