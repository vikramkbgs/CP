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
    int a[n], b[n];
    read(a);
    read(b);
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    int j = 0;
    for(int i =0; i<n && j < n; i++)
    {
        if(a[i] < b[j] && k)
        {
            a[i] = b[j];
            j++;
            k--;
        }
    }
    ll sum =0;
    sum = accumulate(a, a+n, sum);
    cout<<sum<<endl;
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