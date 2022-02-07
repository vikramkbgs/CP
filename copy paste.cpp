#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int num[n];
        for (int i = 0; i < n; i++)
            cin >> num[i];

        sort(num, num + n);
        long long count = 0;
        for (int i = 1; i < n; i++)
        {
            count += (k - num[i]) / num[0];
        }

        cout << count << endl;
    }
    return 0;
}