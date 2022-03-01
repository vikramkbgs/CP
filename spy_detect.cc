/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, index;
        cin >> n >> a;
        int cornercheck = a;
        for (int i = 1; i < n; i++)
        {
            cin >> b;
            if (a == b)
                continue;
            else
            {
                index = i - 1;
            }
            if (i != n - 1)
                a = b;
        }
        if (a == cornercheck && a != b)
            cout << index + 2 << endl;
        else
            cout << index + 1 << endl;
    }
    return 0;
}