#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int count = 0;
        char prev = 'x';
        if (b >= 0)
            cout << (n * a + b * n) << endl;
        else
        {
            ll ans = n * a;
            for (int i = 0; i < n; i++)
            {
                if (prev != s[i])
                    count++;
                prev = s[i];
            }
            cout << (ans + ((count + 2) >> 1) * b) << endl;
        }
    }
    return 0;
}
