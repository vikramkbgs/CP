#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int &i: arr)
       cin>>i;

       sort(arr, arr+(n-1));

       if(arr[n-2] > arr[n-1])
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    return 0;
}