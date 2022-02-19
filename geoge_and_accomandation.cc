#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    int room;
    cin >> room;
    int roomboth = 0;
    while (room--)
    {
        int p, q;
        cin >> p >> q;

        if ((q - p) >= 2)
            roomboth++;
    }
    cout << roomboth << endl;
    return 0;
}
