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
    set<int>a;
    for(int i = 0; i<n; i++)
    {
        int temp;
        cin>>temp;
        a.insert(temp);
    }

    for (int i = 1; i <= n; i++)
    {
        if(i <= a.size())
        cout<<a.size()<<" ";
        else
        cout<<i<<" ";
    }
    cout<<"\n";
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