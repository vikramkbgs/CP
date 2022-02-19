#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{
   int t;
   cin>>t;
   
   while(t--)
   {
       ll a, b; cin>>a>>b;
       ll arr[b];
       for(ll &i : arr )
            {
                cin>>i;
            }
        sort(arr, arr+b);
        ll sum =  0; int i = b-1;
        int count = 0;
        while((sum+(a-arr[i])) <= (a-1) && b > 0)
        {
            sum += a-arr[i];
            i--; b--;
            count++;
        }
        cout<<count<<endl;
   }
   return 0;
}
  
