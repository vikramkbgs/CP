/*------------------------------------------------------------Vikram Roy--------------------------------------------------------*/
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
   ll sum = 0;
   for(int i =0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp < 0)
            cout<<sum + temp<< " ";
            else
            {
                sum += temp;
                cout<<sum<<" ";
            }
        }
    return;
}






/*------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}