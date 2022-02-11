#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int n, k; ll sum, pagesum;
    cin >> n >> k;
    int arr[n];

    for (int &i : arr)
        cin >> i;
    pagesum = k; sum = 0; int first =0;
    if(arr[0] >= k)
    first++;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (pagesum - sum > 0)
            cout << 0 << " ";
        else
        {
            ll count = (abs(pagesum - sum) + k - 1) / k;
            if (abs(pagesum - sum) == 0 || abs(pagesum - sum) == 5)
                count++;

            cout << count+first << " ";
            pagesum += count*k;
            first = 0;
        }
    }
    return 0;
}