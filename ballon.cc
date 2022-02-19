#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &i : arr)
        cin >> i;
    if (n == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    else if (n == 2 && arr[0] == arr[1])
    {
        cout << -1 << endl;
        return 0;
    }
    int temp = *min_element(arr, arr + n);
    cout << 1 << endl;
    for (int i = 0; i < n; i++)
    {
        if (temp == arr[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}