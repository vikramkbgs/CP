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
    int a[n];
    read(a);
    int sum = 0, twin1Money = 0;
    sum = accumulate(a, a+n, sum);
    sort(a, a+n);
    for(int i =n-1; i>= 0; i--)
    {
        twin1Money += a[i];
        sum -= a[i];
        if(twin1Money > sum)
        {
            cout<<(n - i)<<endl;
            return;
        }
    }
    cout<<n<<endl;
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