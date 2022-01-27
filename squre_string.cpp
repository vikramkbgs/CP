#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;
    
    
    while(t--)
    {
      string str; cin>>str;
      
      if(str.size()%2 == 1)
       {
         cout<<"NO"<<endl;
       }
      else 
       {
         int i = 0;
         for( i=0; i<str.size()/2; i++)
          {
            if(str[i] == str[i+str.size()/2])
            continue;
            else
            cout<<"NO"<<endl;
            break;
          }
          
        if(i >= str.size()/2)
        cout<<"YES"<<endl;
       }
    }
   
return 0;
}