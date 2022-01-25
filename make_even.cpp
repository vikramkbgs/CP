#include<bits/stdc++.h>
using namespace std;

vector<int> digit(int n)
{
    vector<int>digi;
    stack<int>d;
    while(n>0)
    {
        d.push(n%10);
        n = n / 10;
    }
    while(!d.empty()){ digi.push_back(d.top()); d.pop(); }
    
    return digi;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, i = 0; cin>>n;
        vector<int> digitArr = digit(n);
        int size = digitArr.size();
        
        if(size == 1 && digitArr[0] % 2 != 0)
           { cout<<-1<<endl; continue; }
    
        if(digitArr[size - 1] % 2 == 0)
            { cout<<0<<endl;  continue; }
            
       else if(digitArr[0] % 2 == 0)
             {  cout<<1<<endl; continue; }
             
        for(i = 1; i<size; i++)
            {
                if(digitArr[i] % 2 == 0)
                { cout<<2<<endl;   break; }
            }
            
        if(i == digitArr.size())
            cout<<-1<<endl;
    }
    return 0;
}