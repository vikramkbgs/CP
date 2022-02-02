#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2];
        cin >> a[0] >> a[1];
        sort(a, a + 2);
        ll operation = 0;
        while (a[0] > 0 && a[1] > 0)
        {
            int temp = a[1] % a[0];
            operation += a[1] / a[0];
            a[1] = a[0];
            a[0] = temp;
        }
        cout << operation << endl;
    }
    return 0;
}