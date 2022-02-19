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
        int n;
        cin >> n;
        int count = 2;
        string s;
        cin >> s;
        if (n == 3)
        {
            cout << s << "a" << endl;
            continue;
        }
        cout << s[0];
        for (int i = 0; i < n - 3; i++)
        {
            string ts;
            cin >> ts;
            if (s[1] == ts[0])
                cout << ts[0];
            else
            {
                cout << s[1] << ts[0];
                count++;
            }
            s = ts;
            count++;
        }
        cout << s[1];
        if (count < n)
            cout << "a";
        cout << "\n";
    }
    return 0;
}