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
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if ((n - i) % i == 0)
        {
            count++;
            //    cout<<"n :"<<n-i<<"i: "<<i<<endl;
        }
    }
    cout << count << endl;
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