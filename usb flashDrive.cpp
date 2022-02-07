#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    int usb[n] = {0};

    for (int &i : usb)
        cin >> i;
    sort(usb, usb + n, greater<int>());
    int i = 0;
    while (m > 0)
    {
        m -= usb[i];
        i++;
        count++;
    }

    cout << count << endl;
    return 0;
}