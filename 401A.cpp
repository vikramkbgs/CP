#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, x, sum, count; sum = count = 0;
    cin>>n>>x;
    for(int i =0; i<n; i++)
      {
         int temp; cin>>temp;
         sum += temp;
      }
      
      sum = abs(sum);
      while(sum  > 0 )
          {
             sum -= x; count++;
          }
      cout<<count<<endl;
  
    return 0;
}