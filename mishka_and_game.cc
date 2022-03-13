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
    int n,a,b,cnt = 0, draw = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a < b)
        cnt++;
        else if(a == b)
        draw++;
    }
    if(((n - draw)-cnt) == cnt)
        cout << "Friendship is magic!^^"<<endl;
    else if (((n - draw) - cnt) < cnt)
        cout << "Chris"<<endl;
    else
        cout << "Mishka"<<endl;
         return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}