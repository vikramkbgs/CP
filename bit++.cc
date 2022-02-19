#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt1, cnt2;
        cnt1 = cnt2 = 0;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == '+')
            {
                cnt1++;
                cnt2 = 0;
            }
            else if (s[i] == '-')
            {
                cnt2++;
                cnt1 = 0;
            }
        }
        if (cnt1 == 2)
            count++;
        if (cnt2 == 2)
            count--;
    }
    cout << count << endl;
    return 0;
}
