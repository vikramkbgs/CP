#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    char current, prev;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    prev = ' ';

    for (int i = 0; i < n; i++)
    {
        current = arr[i][0];
        for (int j = 0; j < m; j++)
        {
            // cout<<arr[i][j]<<" ";
            if (current == arr[i][j] && arr[i][j] != prev)
                continue;
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        prev = current;
    }
    cout << "YES" << endl;
    return 0;
}