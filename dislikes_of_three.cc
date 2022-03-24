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
vector<int>dislike;
void precal()
{
    for(int i = 1; i<=1666; i++)
    {
        if(i%10 != 3)
            if(i%3)
            dislike.pb(i);
    }
    return;
}

void solve()
{
    int n;
    cin>>n;
    cout<<dislike[n-1]<<endl;
    
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
    precal();
        while (t--)
            solve();

        return 0;
    }