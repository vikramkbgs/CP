#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;
    
    
    while(t--)
    {
      int n, d;
      cin>>n>>d;
      
      if(n <= d)
      cout<<(int)ceil((double)d/n)<<endl;
      else
      {
        int temp =(int)ceil((double)((n - d))/d);
        d += d*temp;
       if(n <= d)
      cout<<(int)ceil((double)d/n)<<endl;
      }
    }
return 0;
}