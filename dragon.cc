#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    // inserting data in multimap
    int n, s;
    cin >> s >> n;
    ll mx = s;
    int count = 0;
    multimap<int, int> x;
    multimap<int, int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        int tempx, tempb; // tempx  temprory bonus, tempb temprory bonus
        cin >> tempx >> tempb;
        x.insert(pair<int, int>(tempx, tempb));
    }

    for (it = x.begin(); it != x.end(); ++it)
    {
        if ((*it).first < mx)
        {
            mx += (*it).second;
            count++;
        }
        else
            break;
    }
    if (count == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
