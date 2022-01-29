#include<bits/stdc++.h>
using namespace std;
#define sz(x)  (int)((x).size())

int main()
{
  int t;
  cin>>t;
  while(t--)
   { int n;
    cin>>n;
    vector<int>arr(101, 0);
    
    for(int i = 0; i<n; i++)
      {
        int temp = 0;
        cin>>temp;
        if(temp == 0)
        arr[temp] = 1;
        else
        {
          arr[abs(temp)] +=1;
        }   
      }
      
   int count=0;
   for(int i=0; i<=100; i++)
    {
      if(arr[i] >= 2)
      count += 2;
      else if(arr[i])
            count++;
    }
    
    if(n > count)
    cout<<count<<endl;
    else
    {
      cout<<n<<endl;
    }
   }
    
return 0;
}