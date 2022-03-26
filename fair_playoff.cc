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
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int m1 = max(a[0], a[1]);
    int m2 = max(a[2], a[3]);
    sort(a, a+4);
    if(m1 > m2)
        swap(m1,m2);
    if(m1 == a[2] && m2 == a[3])
    cout<<"YES"<<endl;
    else
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
/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// solution of problem
void solve()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int m1 = max(a[0], a[1]);
    int m2 = max(a[2], a[3]);
    sort(a, a+4);
    if(m1 > m2)
        swap(m1,m2);
    if(m1 == a[2] && m2 == a[3])
    cout<<"YES"<<endl;
    else
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