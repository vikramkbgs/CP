#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int  x, y, n; cin>>x>>y>>n;
        int nRemainder = n % x;
       
       if(nRemainder == y)
         cout<<n<<endl;
       else if(nRemainder > y)
         cout<<n - (nRemainder - y)<<endl;
       else 
       {
           n = n + (y - nRemainder);
           n = n - x;
           cout<<n<<endl;
       }
    }
return 0;
}