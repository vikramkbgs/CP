#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp - 1] = i;
    }

    for (int i : arr)
        cout << i << " ";
    return 0;
}
