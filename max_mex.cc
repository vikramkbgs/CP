#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[2][n];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
                
        ll sum = 0;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[0][i] == arr[1][i] && arr[0][i] == '0')
            {
                cnt1++;
                sum++;
            }
            else if (arr[0][i] != arr[1][i])
            {
                sum += 2;
                cnt1 = 0;
                cnt2 = 0;
            }
            else if (arr[0][i] == arr[1][i] && arr[0][i] == '1')
                cnt2++;

            if (cnt1 && cnt2)
            {
                sum++;
                cnt1 = cnt2 = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
