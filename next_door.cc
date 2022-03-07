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
void solve()
{
    string s;
    cin >> s;
    int flag[3] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'r')
        {
            flag[0] = 1;
            continue;
        }
        else if (s[i] == 'b')
        {
            flag[1] = 1;
            continue;
        }
        else if (s[i] == 'g')
        {
            flag[2] = 1;
            continue;
        }

        if (s[i] == 'G')
        {
            if (flag[2])
                continue;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'B')
        {
            if (flag[1])
                continue;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'R')
        {
            if (flag[0])
                continue;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}