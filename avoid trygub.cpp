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
        int n, hashmap[26] = {0};
        cin >> n;
        string s;
        cin >> s;
        for (char temp : s)
        {
            hashmap[temp - 'a'] += 1;
        }
        for (int i = 0; i < 26; i++)
        {
            while (hashmap[i] > 0)
            {
                cout << (char)('a' + i);
                hashmap[i]--;
            }
        }
        cout << "\n";
    }
    return 0;
}