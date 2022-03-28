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
    int a[3], coin;
    cin>>a[0]>>a[1]>>a[2]>>coin;
    sort(a, a+3);
    int balance = a[2] - a[1] + a[2] - a[0];
    if((coin - balance)%3 || coin < balance)
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