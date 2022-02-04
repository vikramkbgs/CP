#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    int t = sz(s) - 1;
    while (t > -1)
    {

        // cout<<"test:"<<s[t]<<endl;

        if (s[t] == ' ' || s[t] == '?')
        {
            t--;
            continue;
        }
        else if (s[t] == 'a' || s[t] == 'i' || s[t] == 'o' || s[t] == 'u' || s[t] == 'e' || s[t] == 'A' || s[t] == 'I' || s[t] == 'O' || s[t] == 'U' || s[t] == 'E' || s[t] == 'Y' || s[t] == 'y')
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }
    t--;
    return 0;
}