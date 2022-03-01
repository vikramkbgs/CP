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
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a, b;
    cin >> a >> b;
    int c = a, carry = 0;
    while (a >= b || carry >= b)
    {
        carry = a % b;
        c += a / b;
        a = a / b + carry;
    }
    cout << c << endl;
    return 0;
}