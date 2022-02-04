#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);

        if (arr[2] <= (arr[0] + arr[1] + 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}