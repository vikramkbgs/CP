#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   int n, a, al; cin>>n>>a>>al;
    int hash[n+1] = {0};
   vector<int>athur(a,0);
   vector<int>alak(al, 0);
   
   for(int i =0; i<a; i++) cin>>athur[i];
   
   for(int i =0; i<al; i++) cin>>alak[i];
   
   for(int i =0; i<a; i++)
        hash[athur[i]] = 1;
        
    for(int i =0; i<al; i++)
        hash[alak[i]] = 2;
   
   for(int i =1; i<n+1; i++)
        cout<<hash[i]<<" ";
return 0;
}