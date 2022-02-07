#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (b - a == 1)
        cout << b * 10 - 1 << " " << b * 10 << endl;
    else if (b == a)
        cout << b * 10 << " " << b * 10 + 1 << endl;
    else if (b == 1 && a == 9)
        cout << 9 << " " << 10 << endl;
    else
        cout << -1 << endl;

    return 0;
}