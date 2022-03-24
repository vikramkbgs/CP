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
    int k;
    cin >> k;
    int a[12];
    read(a);
    sort(a, a + 12, greater<int>());
    // write(a)<<" ";
    // cout<<"test :"<<endl;
    ll sum = 0;
    int i = 0;
    for (i = 0; i < 12; i++)
    {
        if (sum >= k)
            break;
        sum += a[i];
    }
    if(sum >= k)
    cout << i << endl;
    else
    cout<<-1<<endl;
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