#include<bits/stdc++.h>
using namespace std;

int Eveness(int arr[])
{
   if(arr[0]%2 == 0 && arr[1]%2 == 0 || 
        arr[0]%2 == 0 && arr[2]%2 == 0 ||
        arr[1]%2 == 0 && arr[2]%2 == 0 )
        return 0;
    else
        return 1;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++)
        cin>>arr[i];
        
    int eveness = Eveness(arr);
    
    if(eveness == 0 )
    {
        for(int i =0; i<n; i++)
           if(arr[i]%2 != 0){cout<<i+1<<endl; break;}
    }
    else
    {
        for(int i =0; i<n; i++)
            if(arr[i]%2 == 0){ cout<<i+1<<endl; break;}
    }
    
    return 0;
}