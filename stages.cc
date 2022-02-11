#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
     int n, k;
     cin>>n>>k;
     string s; 
     cin>>s;
     vector<int> res;
     sort(s.begin(), s.end());
     char temp = s[0];
     res.push_back(((int)temp - 96));
     k--;
     for(int i=1; i<n && k > 0 ; i++)
     {
         if(s[i] - temp <= 1)
         {
             continue;
         }
         else
           {
               temp = s[i];
               res.push_back((int)temp-96);
               k--; 
           }
     }
     int sum = 0;
    if(k == 0)
    cout<<accumulate(res.begin(),res.end(),sum)<<endl;
    else
    cout<<-1<<endl;
    return 0;
}