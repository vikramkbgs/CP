#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb    push_back
#define ll    long long
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int &i : arr)
            cin>>i;
        int max = INT_MIN, min = INT_MAX;
        for(int i =0; i<n; i++)
        {
            if(max <= arr[i])
                max = arr[i];
            if(min > arr[i])
                min = arr[i];
        }
        cout<<max - min<<endl;
    }
    return 0;
}