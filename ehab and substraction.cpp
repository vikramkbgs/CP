#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int i = 0;
    cout << arr[0] << endl;
    k--;
    while (k--)
    {
        while (i < n)
        {
            if (arr[i] == arr[i + 1])
                i++;
            else
                break;
        }

        if (i < n - 1)
            cout << arr[i + 1] - arr[i] << endl;
        else
            cout << 0 << endl;
        i++;
    }
    return 0;
}