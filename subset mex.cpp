#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int hashmap[101] = {0};

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            hashmap[temp] += 1;
        }

        int cnt_mex1, cnt_mex2;
        cnt_mex1 = cnt_mex2 = 0;
        for (int i = 0; i < 101; i++)
        {
            if (hashmap[i] > 0)
            {
                cnt_mex1++;
                hashmap[i]--;
            }
            else
                break;
        }
        for (int i = 0; i < 101; i++)
        {
            if (hashmap[i] > 0)
            {
                cnt_mex2++;
                hashmap[i]--;
            }
            else
                break;
        }
        cout << cnt_mex1 + cnt_mex2 << endl;
    }
    return 0;
}