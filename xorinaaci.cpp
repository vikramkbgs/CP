#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int c = a ^ b;
        n = n % 3;
        if (n == 0)
            cout << a << endl;
        else if (n == 1)
            cout << b << endl;
        else if (n == 2)
            cout << c << endl;
    }
    return 0;
}