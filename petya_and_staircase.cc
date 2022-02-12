#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int flag = 1;
    cin >> n >> m;
    int arr[m];
    for (int &i : arr)
        cin >> i;
    sort(arr, arr + m);

    if (arr[0] == 1 || arr[m - 1] == n)
        flag = 0;

    for (int i = 0; i < m - 2; i++)
    {
        if (arr[i] == (arr[i + 1] - 1) &&
            arr[i + 1] == (arr[i + 2] - 1))
            flag = 0;

        if (flag == 0)
            break;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}