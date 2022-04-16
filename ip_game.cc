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
    int n, m;
    cin>>n>>m;
    map<string , string> hashmap;
    for(int i =0; i<n; i++)
    {
        string name, ip;
        cin>>name>>ip;
        ip +=";";
        hashmap[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        string name, ip;
        cin >> name >> ip;
        cout<<name<<" "<<ip<<" "<<"#"<<hashmap[ip]<<endl;
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
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}