#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;

        if ((r * c) % 2 == 0)
            cout << (r * c) / 2 << endl;
        else
            cout << (r * c) / 2 + 1 << endl;
    }
    return 0;
}