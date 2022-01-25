#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int position = str.find("WUB");
   
   while(position != string::npos)
   {
           str.erase(str.begin()+position, str.begin()+position+3);
            str.insert(position," ");
            position = str.find("WUB");
   }
    cout<<str;
    return 0;
}