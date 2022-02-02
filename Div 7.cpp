#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
            cout << n << endl;
        else
        {
            int temp = n % 10;
            n = n - temp;
            for (int i = 0; i <= 9; i++)
            {
                if (((n + i) % 7) == 0)
                {
                    cout << n + i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}