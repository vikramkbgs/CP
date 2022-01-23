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
    vector<int> mergeArr;
    i = j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            mergeArr.push_back(arr1[i]);
            i++;
        }
        else
        {
            mergeArr.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        mergeArr.push_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        mergeArr.push_back(arr2[j]);
        j++;
    }

    for (int k = 0; k < mergeArr.size(); k++)
        cout << mergeArr[k] << " ";

    return 0;
}