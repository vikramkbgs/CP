#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string key;
        cin >> key;
        string s;
        cin >> s;
        int alpha[27];
        int count = 0;

        for (int i = 0; i < sz(key); i++)
            alpha[key[i] - 'a'] = i + 1;

        for (int i = 0; i < sz(s) - 1; i++)
        {
            count += abs(alpha[s[i + 1] - 'a'] - alpha[s[i] - 'a']);
        }

        cout << count << endl;
    }
    return 0;
}