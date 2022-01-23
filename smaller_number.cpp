#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int i, j;
    int count = 0;
    i = j = 0;

    while (j < m)
    {
        if (i < n && arr1[i] < arr2[j])
        {
            count++;
            i++;
        }
        else
        {
            cout << count << " ";
            j++;
        }
    }
    return 0;
}