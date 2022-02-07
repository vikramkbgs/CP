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
        int arr[n] = {0};
        for (int &x : arr)
            cin >> x;
        vector<int> res;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                res.pb(arr[i]);
                res.pb(arr[i + 1]);
                i++;
            }
            else
            {
                res.pb(0);
                i++;
            }
        }

        cout << res.size() << endl;
        for (int i : res)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}