#include<bits/stdc++.h>
#define sz(x)   (x).size()
#define  pb     push_back
#define ll      long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll x, y, k;
        cin>>x>>y>>k;
        
        ll need = y*k + k;
        ll n = ((need - x)+(x-2))/(x-1)+1;
        
        cout<<n+k<<endl;
    }
    return 0;
}