#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                count++;
            else
                break;
        }

        if (count > n - count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}