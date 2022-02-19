#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    string s, ts;
    cin >> s >> ts;
    rev(s);
    if (ts == s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
