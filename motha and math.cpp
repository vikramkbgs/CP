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
        unsigned int sum = 0;
        cin >> arr[0];
        sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            sum &= arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}