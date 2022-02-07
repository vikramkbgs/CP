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
        int n, h;
        cin >> n >> h;
        int wpn[n];

        for (int i = 0; i < n; i++)
            cin >> wpn[i];

        sort(wpn, wpn + n, greater<int>());

        int count = 0;
        int i = 0;
        while (h > 0)
        {
            if (h >= wpn[0] + wpn[1])
            {
                count += 2 * (h / (wpn[0] + wpn[1]));
                h = h % (wpn[0] + wpn[1]);
            }

            if (h > 0)
            {
                i = i % 2;
                h -= wpn[i];
                i++;
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}