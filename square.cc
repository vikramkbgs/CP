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
    int a1, b1, a2, b2;
    cin>>a1>>b1>>a2>>b2;

    if(a1 == a2 )
    {
        if((b1+b2)==a1)
            {
                cout<<"YES"<<endl;
                return;
            }
    }
    if (a1 == b2)
    {
        if ((b1 + a2) == a1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (b1 == a2)
    {
        if ((a1 + b2) == b1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (b1 == b2)
    {
        if ((a1 + a2) == b1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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