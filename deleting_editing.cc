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
    string s, target;
    cin>>s>>target;
    int sc[26] = {0};
    int targetc[26] = {0};
    for(int i = 0; i<s.size(); i++)
        sc[s[i] - 'a']++;

    for (int i = 0; i < target.size(); i++)
        targetc[target[i] - 'a']++;

    for(int i =0;i<s.size(); i++)
    {
        if()
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
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}