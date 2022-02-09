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

        cout<<*max_element(arr, arr+n) - *min_element(arr, arr+n)<<endl;
    }
    return 0;
}