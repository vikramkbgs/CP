#include<bits/stdc++.h>
using namespace std;
#define sz(x)   x.size()

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        
        if(n == 1 )
           {
               cout<<"YES"<<endl;
           }
        else if(n == 2 &&  s[0] != s[1])
           {
               cout<<"YES"<<endl;
           }
        else
        { 
            cout<<"NO"<<endl;
        }
    }
}