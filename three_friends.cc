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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);

    if(a[0] == a[1] && a[1] == a[2])
    cout<<0<<endl;
    else if(a[0] == a[1] && a[2] - a[0] > 1)
    {
        a[2]--; 
        cout<<2*(a[2]-a[0])<<endl;
    }
    else if (a[1] - a[0] == 1 && a[2] - a[1] > 1)
    {
        a[2]--;
        a[0]++;
        cout << 2 * (a[2] - a[0]) << endl;
    }
    else if (a[0] == a[1] && a[2] - a[0] == 1)
    {
        cout <<0<< endl;
    }
    else if (a[1] == a[2] && a[1] - a[0] == 1)
    {
        cout << 0 << endl;
    }
    else if (a[2] - a[1] == 1 && a[1] - a[0] > 1)
    {
        a[0]++;
        cout << 2 * (a[1] - a[0]) << endl;
    }
    else
    {
        a[0]++; a[1]--; a[2]--;
        cout<<a[1]-a[0]+a[2]-a[0]+a[2]-a[1]<<endl;
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
    int t;
    cin >> t;
    while (t--)
    solve();

    return 0;
}