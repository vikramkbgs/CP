#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int hashmap[26] = {0};
        int flag = 1;
        string s;

        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            s += temp;
        }

        for (int i = 0; i < sz(s); i++)
        {
            hashmap[s[i] - 'a'] += 1;
        }

        for (int i = 0; i < 26; i++)
        {
            if (hashmap[i] % n != 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}