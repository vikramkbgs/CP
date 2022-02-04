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
        int n;
        cin >> n;
        int cnt_3, cnt_5, cnt_7;
        cnt_3 = cnt_5 = cnt_7 = 0;

        if (n <= 2 || n == 4)
            cout << -1 << endl;
        else if (n == 8)
            cout << 1 << " " << 1 << " " << 0 << endl;
        else if (n == 11)
            cout << 2 << " " << 1 << " " << 0 << endl;
        else
        {
            while (n > 0)
            {
                if (n % 3 == 0)
                {
                    cnt_3 += n / 3;
                    break;
                }
                if (n % 5 == 0)
                {
                    cnt_5 += n / 5;
                    break;
                }
                cnt_7++;
                n -= 7;
            }
            cout << cnt_3 << " " << cnt_5 << " " << cnt_7 << endl;
        }
    }
    return 0;
}