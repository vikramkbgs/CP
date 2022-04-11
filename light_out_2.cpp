#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    int a[3][3]; 
    for (int i = 0; i< 3; i++)
        for (int j = 0;j< 3; j++)
            a[i][j] = 1; 
    int input; 
    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cin >> input; 
            if (input % 2)
            {
                a[i][j] = (a[i][j] ? 0 : 1); 
                if (i - 1 >= 0 )
                    a[i-1][j]  = (a[i-1][j] ? 0 : 1);
                if (i+1 <= 2)
                    a[i+1][j]  = (a[i+1][j] ? 0 : 1);
                if (j-1 >= 0)
                    a[i][j-1] = (a[i][j-1] ? 0 : 1); 
                if (j+1 <= 2)
                    a[i][j+1] = (a[i][j+1] ? 0 : 1); 
            }
        }
    }
    for (int i = 0; i< 3; i++){
        for (int j = 0;j< 3; j++)
            {cout << a[i][j] << " " ; }
        cout << endl;  }
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

    return 0;}