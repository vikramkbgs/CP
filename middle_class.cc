/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// solution of problem
void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n];

    ll xburel = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > k)
        {
            xburel += a[i] - k;
            a[i] = k;
        }
    }
    int count = 0;
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (a[i] + xburel >= k)
        {
            if (a[i] == k)
                count++;
            else
            {
                xburel -= (k - a[i]);
                count++;
            }
        }
    }
    cout << count << endl;
    //   output(a)<< " ";
    //   cout<<"\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}