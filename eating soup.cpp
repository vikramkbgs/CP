#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << 0 << endl;
    else if (b <= 1 && a > 0)
        cout << 1 << endl;
    else if (a == 3 && b == 2)
        cout << 1 << endl;
    else
    {
        if (b > a / 2)
        {
            int temp = b - (a / 2);
            if (a % 2 == 0)
                cout << a / 2 - temp << endl;
            else
                cout << a / 2 - temp + 1 << endl;
        }
        else
            cout << a / 2 - abs(a / 2 - b) << endl;
    }
    return 0;
}