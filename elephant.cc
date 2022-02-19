#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    ll n;
    cin >> n;
    cout << min(n % 5, 1LL) + n / 5 << endl;
    return 0;
}
