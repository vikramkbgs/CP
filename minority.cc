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
        string s;
        cin >> s;
        if (sz(s) <= 2)
            cout << 0 << endl;
        else
        {
            int cnt0 = 0;
            for (int i = 0; i < sz(s); i++)
                if (s[i] == '0')
                    cnt0++;
            int cnt1 = (sz(s) - cnt0);
            if (cnt0 != (sz(s) - cnt0))
                cout << min(cnt0, cnt1) << endl;
            else
            {
                int n = sz(s) - 1;
                while (n >= 0)
                {
                    if (s[n] == '0')
                        cnt0--;

                    if (cnt0 != (n - cnt0))
                    {
                        cout << min(cnt0, (n - cnt0)) << endl;
                        break;
                    }
                    n--;
                }
            }
        }
    }

    return 0;
}
