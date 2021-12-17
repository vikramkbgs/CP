#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    if (arr[0] != 1)
    {
        cout << 1;
    }
    else
    {
        int temp = arr[arr.size() - 1] + 1;
        for (int i = 0; i < n - 1; i++)
        {

            if (arr[i] + 1 < arr[i + 1])
            {
                temp = arr[i] + 1;
                break;
            }
        }
        cout << temp << endl;
    }
    return 0;
}