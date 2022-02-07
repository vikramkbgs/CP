#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int lastchar = sz(s) - 1;
        int firstchar = 0;
        cout << s[firstchar];
        for (int i = 1; i < lastchar; i += 2)
            cout << s[i];

        cout << s[lastchar];
        cout << endl;
    }
}