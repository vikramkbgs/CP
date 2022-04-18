/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define read(x)           \
    for (auto &(i) : (x)) \
    cin >> i
#define write(x)          \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;
// solution of problem
vector<int> digitArr(ll n)
{
    vector<int> a;
    while (n > 0)
    {
        int temp = n % 10;
        n /= 10;
        a.pb(temp);
    }
    reverse(a.begin(), a.end());
    return a;
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> a;
    a = digitArr(n);
    int cnt1, cnt2, f1, f2;
    cnt1 = cnt2 = 0;
    f1 = f2 = 0;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == 0 && !f1)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] == 0 || a[j] == 5)
                {
                    f1 = 1;
                    break;
                }
                if (!f1)
                    cnt1++;
            }
        }
        if (!f1)
            cnt1++;

        if (a[i] == 5 && !f2)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] == 2 || a[j] == 7)
                {
                    f2 = 1;
                    break;
                }
                if (!f2)
                    cnt2++;
            }
        }
        if (!f2)
            cnt2++;
    }
    cout << min(cnt1, cnt2) << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}