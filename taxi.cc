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
    int n;
    cin>>n;
    int a[5] = {0};
    
    for(int i =0; i<n; i++)
    {
        int temp;
        cin>>temp;
        a[temp]++;
    }
    
    ll car = 0;
    car += min(a[1], a[3]) + (max(a[1], a[3]) - min(a[1], a[3]));
    car += a[2]/2 + a[2]%2;
    car += a[4];
    cout<<car<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}