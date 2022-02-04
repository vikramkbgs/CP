#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a <= b)
        cout << n * a << endl;
    else
    {
        int temp = n % m;
        int x = n / m;

        if (temp * a < b)
            cout << x * b + temp * a << endl;
        else
            cout << x * b + b << endl;
    }
    return 0;
}