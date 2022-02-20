#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    unsigned int twopow = 1;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=2; i<32; i++)
        {
            int div =(twopow << i);
            div--;
            if(n%div == 0)
               {
                   cout<<n/(div)<<endl;
                   break;
               }
        }
    }
 return 0;
}
  
