#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string temp = s;
        reverse(s.begin(), s.end());

        if (k == 0)
            cout << 1 << endl;
        else if (temp == s)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}