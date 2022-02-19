#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    ll n;
    cin >> n;

    if (n == 0)
        cout << 0 << endl;
    else if ((n + 1) % 2 == 0)
        cout << (n + 1) / 2 << endl;
    else
        cout << n + 1 << endl;

    return 0;
}
