#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 1 && b > 1 && c > 1)
        cout << a * b * c << endl;
    else if (a == 1 && b == 1 && c == 1)
        cout << 3 << endl;
    else if (a > 1 && b > 1 && c == 1)
        cout << a * (b + c) << endl;
    else if (a == 1 && b > 1 && c > 1)
        cout << (a + b) * c << endl;
    else if (a > 1 && b == 1 && c > 1)
        cout << (b + min(a, c)) * (max(a, c)) << endl;
    else if (a == 1 && b == 1 && c > 1)
        cout << (a + b) * c << endl;
    else if (a > 1 && b == 1 && c == 1)
        cout << (c + b) * a << endl;
    else if (a == 1 && b > 1 && c == 1)
        cout << a + b + c << endl;

    return 0;
}
