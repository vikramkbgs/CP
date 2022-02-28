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
    ll n, c = 0;
    cin >> n;

    while (n > 0)
    {
        if (n % 2)
        {
            n--;
            c++;
        }
        else
        {
            n /= 2;
        }
    }
    cout << c << endl;
    return 0;
}