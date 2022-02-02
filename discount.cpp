#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int n, coupon;
    cin>>n;
    int bar[n]; ll sum = 0;
    for(int i=0; i<n; i++)
       {
       cin>>bar[i]; sum += bar[i];
       }
    cin>>coupon;
    int cnp[coupon];
    
for(int i=0; i<coupon; i++)
       cin>>cnp[i];

    sort(bar, bar+n);
   
    for(int k = 0; k<coupon; k++)
   {
    cout<<sum - (bar[n - cnp[k]])<<endl;
   }
    return 0;
}