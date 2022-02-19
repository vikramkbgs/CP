#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n, k, w;
    cin >> n >> k >> w;
    if ((n * (((w + 1) * w) / 2) - k) > 0)
        cout << n * (((w + 1) * w) / 2) - k << endl;
    else
        cout << 0 << endl;
    return 0;
}
