#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        int  n; cin>>n;
        ll sum, arr[n]; 
        sum = 0;
        
        for(int i =0; i<n; i++)
          {  
              cin>>arr[i];
          }
          int i;
          sum = arr[0]; ll need = 0;
          for(i =1; i<n; i++)
          {  
              need += i;
              sum += arr[i];
              if(sum >= need)
               {
                  continue;
               }
              else
                {
                    cout<<"NO"<<endl;
                    break;
                }
          }
          if(i >= n)
          cout<<"YES"<<endl;
    }
    return 0;
}