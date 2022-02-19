#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n], count = 0;

    for (int &i : arr)
        cin >> i;
    int temp = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (temp <= arr[i] && arr[i] > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}
