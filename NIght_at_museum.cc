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
int diff(char a, char b)
{
    if (a > b)
        swap(a, b);

    return min(b - a, 26 - b + a);
}

void solve()
{
    string s;
    cin>>s;
    int clock, anticlock, currentpos = s[0] - 'a';
    for(int i =0; i<s.size(); i++)
    {
           
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}