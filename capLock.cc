/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include<bits/stdc++.h>
#define ll long long
#define input(x)    for(int &(i) : (x))cin>>i   

using namespace std;

int cCap(string s)
{
    int c = 0;
    for(int i=0; i<s.size(); i++)
    if(s[i] >='A' && s[i] <= 'Z')
    c++;
    
    return c;
}

bool checkCap(char x)
{
    if(x >='A' && x <= 'Z')
    return true;
    
    return false;
}


int main()
{
  string s;
  cin>>s;
  
  if(s.size() == cCap(s))
  {
      for(int i = 0; i<s.size(); i++)
      {
          char temp = tolower(s[i]);
          cout<<temp;
      }
  }
  else if(!checkCap(s[0]) && s.size()-1 == cCap(s))
  {
      char temp = toupper(s[0]);
      cout<<temp;
      for(int i = 1; i<s.size(); i++)
      {
          char temp = tolower(s[i]);
          cout<<temp;
      }
  }
  else
  cout<<s<<endl;
  return 0;
}