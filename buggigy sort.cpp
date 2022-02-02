#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << -1;
        return 0;
    }
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        arr[i] = n - i;
    /*
       for(int i =0; i<n; i++)
           for(int j =i; j<n; j++)
              if(arr[j] > arr [j+1])
                  swap(arr[j], arr[j+1]);
        */
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}