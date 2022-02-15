#include<bits/stdc++.h>
#define sz(x)  (x).size()
using namespace std;

int main()
{
   
   int n;
   cin>>n;
   
   if(n <= 9)
   cout<<n<<endl;
   else if(n > 9 && n <= 189)
   {
       n -= 9;
       if(n%2 == 0)
       cout<<(9+n/2)%10<<endl;
       else
        cout<<((9+(++n)/2))/10<<endl;
   }
    else if(n > 189 && n <= 2889)
   {
       n -= 189;
       if(n%3 == 0)
       cout<<(99+n/3)%10<<endl;
       else
        {
            int num = (99+n/3);
            num++;
            if(n%3 == 1)
            cout<<num/100<<endl;
            else
            cout<<(num/10)%10<<endl;
        }
   }
    else if(n > 2889 && n <= 10000)
   {
       n -= 2889;
       if(n%4 == 0)
       cout<<(999+n/4)%10<<endl;
       else
        {
             int num = (999+n/4);
            num++;
            if(n%4 == 1)
            cout<<num/1000<<endl;
            else if(n%4 == 2)
            cout<<(num/100)%10<<endl;
            else
            cout<<(num/10)%10<<endl;
        }
   }
   return 0; 
}