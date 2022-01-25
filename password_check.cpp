#include<bits/stdc++.h>
using namespace std;

bool lengthCheck(string x)
{
    int i, count; i = count = 0;
    while(i < x.size())
      { 
          count++;
          if(count >= 5)
          return true;
          
          i++;
      }
    return false;
}

bool smallCapCheck(string x)
{
    int i =0;
    while(i < x.size())
        {
            if(x[i] >= 'a' && x[i] <= 'z')
            return true;
            i++;
        }
            
    return false;
}

bool capitalCapCheck(string x)
{
    int i =0;
    while(i < x.size())
       {
           if(x[i] >= 'A' && x[i] <= 'Z')
            return true;
            i++;
       }    
    return false;
}

bool digitCheck(string x)
{
    int i =0;
    while(i < x.size())
        {
            if(x[i] >= '0' && x[i] <= '9')
            return true;
            i++;
        }
            
    return false;
}

int main()
{
    string str;
    cin >> str;
    
    if(lengthCheck(str) && smallCapCheck(str) 
        && capitalCapCheck(str) && digitCheck(str))
        cout<<"Correct";
    else
        cout<<"Too weak";
        
    return 0;
}