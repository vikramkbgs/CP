#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum == 0)
            cout << "NO" << endl;
        else if (sum > 0)
        {
            sort(arr, arr + n, greater<int>());
            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if (sum < 0)
        {
            sort(arr, arr + n);
            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}