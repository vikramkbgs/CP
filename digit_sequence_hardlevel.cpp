#include <bits/stdc++.h>
#define sz(x) (x).size()
#define ll     long long
using namespace std;

int main()
{

    ll n;
    cin >> n;

    if (n <= 9)
        cout << n << endl;
    else if (n > 9 && n <= 189)
    {
        n -= 9;
        if (n % 2 == 0)
            cout << (9 + n / 2) % 10 << endl;
        else
            cout << ((9 + (++n) / 2)) / 10 << endl;
    }
    else if (n > 189 && n <= 2889)
    {
        n -= 189;
        if (n % 3 == 0)
            cout << (99 + n / 3) % 10 << endl;
        else
        {
            ll num = (99 + n / 3);
            num++;
            if (n % 3 == 1)
                cout << num / 100 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 2889 && n <= 38889)
    {
        n -= 2889;
        if (n % 4 == 0)
            cout << (999 + n / 4) % 10 << endl;
        else
        {
            ll num = (999 + n / 4);
            num++;
            if (n % 4 == 1)
                cout << num / 1000 << endl;
            else if (n % 4 == 2)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 38889 && n <= 488889)
    {
        n -= 38889;
        if (n % 5 == 0)
            cout << (9999 + n / 5) % 10 << endl;
        else
        {
            ll num = (9999 + n / 5);
            num++;

            if (n % 5 == 1)
                cout << num / 10000 << endl;
            else if (n % 5 == 2)
                cout << (num / 1000) % 10 << endl;
            else if (n % 5 == 3)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 488889 && n <= 5888889)
    {
        n -= 488889;
        if (n % 6 == 0)
            cout << (99999 + n / 6) % 10 << endl;
        else
        {
            ll num = (99999 + n / 6);
            num++;

            if (n % 6 == 1)
                cout << num / 100000 << endl;
            else if (n % 6 == 2)
                cout << (num / 10000) % 10 << endl;
            else if (n % 6 == 3)
                cout << (num / 1000) % 10 << endl;
            else if (n % 6 == 4)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 5888889 && n <= 68888889)
    {
        n -= 5888889;
        if (n % 7 == 0)
            cout << (999999 + n / 7) % 10 << endl;
        else
        {
            ll num = (999999 + n / 7);
            num++;

            if (n % 7 == 1)
                cout << num / 1000000 << endl;
            else if (n % 7 == 2)
                cout << (num / 100000) % 10 << endl;
            else if (n % 7 == 3)
                cout << (num / 10000) % 10 << endl;
            else if (n % 7 == 4)
                cout << (num / 1000) % 10 << endl;
            else if (n % 7 == 5)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 68888889 && n <= 788888889)
    {
        n -= 68888889;
        if (n % 8 == 0)
            cout << (9999999 + n / 8) % 10 << endl;
        else
        {
            ll num = (999999 + n / 8);
            num++;

            if (n % 8 == 1)
                cout << num / 10000000 << endl;
            else if (n % 8 == 2)
                cout << (num / 1000000) % 10 << endl;
            else if (n % 8 == 3)
                cout << (num / 100000) % 10 << endl;
            else if (n % 8 == 4)
                cout << (num / 10000) % 10 << endl;
            else if (n % 8 == 5)
                cout << (num / 1000) % 10 << endl;
            else if (n % 8 == 6)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 788888889 && n <= 8888888889)
    {
        n -= 788888889;
        if (n % 9 == 0)
            cout << (99999999 + n / 9) % 10 << endl;
        else
        {
            ll num = (9999999 + n / 9);
            num++;

            if (n % 9 == 1)
                cout << num / 100000000 << endl;
            else if (n % 9 == 2)
                cout << (num / 10000000) % 10 << endl;
            else if (n % 9 == 3)
                cout << (num / 1000000) % 10 << endl;
            else if (n % 9 == 4)
                cout << (num / 100000) % 10 << endl;
            else if (n % 9 == 5)
                cout << (num / 10000) % 10 << endl;
            else if (n % 9 == 6)
                cout << (num / 1000) % 10 << endl;
            else if (n % 9 == 7)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 8888888889 && n <= 988888888889)
    {
        n -= 8888888889;
        if (n % 10 == 0)
            cout << (999999999 + n / 10) % 10 << endl;
        else
        {
            ll num = (99999999 + n / 10);
            num++;

            if (n % 10 == 1)
                cout << num / 1000000000 << endl;
            else if (n % 10 == 2)
                cout << (num / 100000000) % 10 << endl;
            else if (n % 10 == 3)
                cout << (num / 10000000) % 10 << endl;
            else if (n % 10 == 4)
                cout << (num / 1000000) % 10 << endl;
            else if (n % 10 == 5)
                cout << (num / 100000) % 10 << endl;
            else if (n % 10 == 6)
                cout << (num / 10000) % 10 << endl;
            else if (n % 10 == 7)
                cout << (num / 1000) % 10 << endl;
            else if (n % 10 == 8)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    else if (n > 988888888889 && n <= 10e12)
    {
        n -= 988888888889;
        if (n % 11 == 0)
            cout << (9999999999 + n / 11) % 10 << endl;
        else
        {
            ll num = (999999999 + n / 11);
            num++;

            if (n % 11 == 1)
                cout << num / 10000000000 << endl;
            else if (n % 11 == 2)
                cout << (num / 1000000000) % 10 << endl;
            else if (n % 11 == 3)
                cout << (num / 100000000) % 10 << endl;
            else if (n % 11 == 4)
                cout << (num / 10000000) % 10 << endl;
            else if (n % 11 == 5)
                cout << (num / 1000000) % 10 << endl;
            else if (n % 11 == 6)
                cout << (num / 100000) % 10 << endl;
            else if (n % 11 == 7)
                cout << (num / 10000) % 10 << endl;
            else if (n % 11 == 8)
                cout << (num / 1000) % 10 << endl;
            else if (n % 11 == 9)
                cout << (num / 100) % 10 << endl;
            else
                cout << (num / 10) % 10 << endl;
        }
    }
    return 0;
}