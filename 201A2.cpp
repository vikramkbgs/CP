#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin>>str;
    int i, j; i = 0; j = 1;
    
    //int flag = 0;
    
    while(i < str.size())
    {
        if(str[i] =='W' && str[i+1] == 'U' && str[i+2] == 'B')
        {
                str.erase(str.begin()+i, str.begin()+i+3);
                str.insert(i, " ");
        }
          i++;
    }
    cout<<str;
    return 0;
}