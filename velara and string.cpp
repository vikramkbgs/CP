#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char sq[n][n];
    int flag = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> sq[i][j];

    if (sq[0][0] == sq[0][1])
    {
        cout << "NO" << endl;
        return 0;
    }

    int k = n - 1;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
                if (sq[i][j] != sq[0][0])
                {
                    flag = 0;
                    break;
                }

            if (sq[p][k] != sq[0][0])
            {
                flag = 0;
                break;
            }

            if (i != j)
                if (sq[i][j] != sq[0][1] && j != k)
                {
                    flag = 0;
                    break;
                }
        }
        if (flag == 0)
            break;
        p++;
        k--;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}