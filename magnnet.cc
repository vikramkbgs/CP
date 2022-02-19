#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    char prev;
    string s;
    cin >> s;
    prev = s[1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s;
        if (s[0] == prev)
            sum++;

        prev = s[1];
    }
    cout << sum + 1 << endl;
    return 0;
}