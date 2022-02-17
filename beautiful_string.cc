#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        char prev = s[0];
        for (int i = 1; i < sz(s) - 1; i++)
        {
            if (s[i] != prev && s[i] != '?')
            {
                prev = s[i];
                continue;
            }

            if (s[i] == '?')
            {
                if (prev == 'a' && s[i + 1] == 'b' || prev == 'b' && s[i + 1] == 'a')
                {
                    s[i] = 'c';
                }
                else if (prev == 'b' && s[i + 1] == 'c' || prev == 'c' && s[i + 1] == 'b')
                {
                    s[i] = 'a';
                }
                else if (prev == 'a' && s[i + 1] == 'c' || prev == 'c' && s[i + 1] == 'a')
                {
                    s[i] = 'b';
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
        if (prev == 'a')
            s[sz(s) - 1] = 'b';
        else if (prev == 'c')
            s[sz(s) - 1] = 'b';
        else
            s[sz(s) - 1] = 'c';

        cout << s << endl;
    }
    return 0;
}