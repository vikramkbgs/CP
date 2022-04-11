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
    int a[3][3] = {{1, 1, 1},
                   {1, 1, 1},
                   {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            if (temp % 2)
            {
                if (a[i][j] == 1)
                    a[i][j] = 0;
                else
                    a[i][j] = 1;

                if (a[i][j + 1] == 1 && i <= 2 && j <= 2)
                    a[i][j + 1] = 0;
                else
                    a[i][j + 1] = 1;
                if (a[i + 1][j] == 1 && i <= 2 && j <= 2)
                    a[i + 1][j] = 0;
                else
                    a[i + 1][j] = 1;

                if (a[i][j - 1] == 1 && i >= 0 && j >= 0)
                    a[i][j - 1] = 0;
                else
                    a[i][j-1] = 1;

                if (a[i - 1][j] == 1 && i >= 0 && j >= 0)
                    a[i - 1][j] = 0;
                else
                    a[i - 1][j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}