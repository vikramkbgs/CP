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

    vector<pair<string, int>>vplayers;
    map<string, int> players;
    for(int i = 0; i<n; i++)
    {
        string name;
        int score;
        cin>>name>>score;
        vplayers.pb({name, score});
        players[name] += score;
    }

    map<string, int>::iterator it;
    int mx = INT_MIN;

    for(pair<string, int> x : players)
    {
        if(mx < x.second)
        mx = x.second;
    }

    set<string> listname;

    for (pair<string, int> x : players)
    {
        if (x.second >= mx)
            listname.insert(x.first);
    }

    int mnc = INT_MAX;
    int c = 0;
    int sum = 0;
    string ans = "";
    for (string x : listname)
    {
        // cout << ans << " mn: " << mnc << endl;
        for(int i = 0; i<vplayers.size(); i++)
        {
            if (vplayers[i].first == x && sum < mx)
            {
                sum += vplayers[i].second;
                c = i;
            }
           
        }
        if(mnc > c)
        {
            mnc = c;
            ans = x;
        }
        sum  = 0;
    }
    cout<<ans<<endl;
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