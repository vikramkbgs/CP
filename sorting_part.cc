#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll arr2[n];
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp;
            arr2[i] = temp;
        }
        sort(arr2, arr2 + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr2[i])
                continue;
            else
                flag = 0;
        }

        if (!flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}