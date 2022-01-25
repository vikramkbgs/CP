#include<bits/stdc++.h>
using namespace std;

int Eveness(int arr[])
{
   
}
int main()
{
   string recipe;
   cin >> recipe;
   int b, s, c;
   cin>>b>>s>>c;
   int pb, ps, pc;
   cin>>pb>>ps>>pc;
   long long money, count = 0;
   cin>>money;
   int nb, ns, nc;
   nb = ns = nc = 0;
  
   
   for(int i=0; i<recipe.size(); i++)
        {
            if(recipe[i] == 'B')
            nb++;
            if(recipe[i] == 'S')
            ns++;
            if(recipe[i] == 'C')
            nc++;
        }
        
     if(nb == 0)
   { nb = 100; pb = 0;}
   
   if(ns == 0)
   { ns = 100; ps = 0;}
   
   if(nc == 0)
   { nc = 100; pc = 0;}
        
    while(b >= nb || s >= ns || c >= nc)
    {
        while(b >= nb && s >= ns && c >= nc)
       {
           b -=nb; s -=ns; c -=nc;
          count++;
       }
       
       if(b == 0 && s == 0 && c ==0)
        break;
       
       if(b < nb)
       {
           int reqB = nb - b;
           if(reqB*pb <= money)
          {  money -= pb*reqB; b += reqB; }
            else
            {
                break;
            }
       }
       if(s < ns)
       {
           int reqS = ns - s;
           if(reqS*ps <= money)
           { money -= ps*reqS; s += reqS;}
            else
            {
                break;
            }
       }
       if(c < nc)
       {
           int reqC = nc - c;
           if(reqC*pc <= money)
           { 
               money -= pc*reqC;
               c += reqC;
           }
            else
            {
                break;
            }
       }
    }
    cout<<count+money/(nb*pb+ns*ps+nc*pc)<<endl;
    return 0;
}