#include <bits/stdc++.h>
#define sz(x) (x).size()
#define ll     long long
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s;
    cin>>s;
    char temp = s[0]; int flag = 0;
    
    for(int i=1; i<n; i++)
    {
        if(s[i] < temp)
        {
            flag = i;
            break;
        }
        temp = s[i];
    }
    
    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<flag<<" "<<flag+1<<endl;
    }
    else
    cout<<"NO"<<endl;
    
    return 0;
}