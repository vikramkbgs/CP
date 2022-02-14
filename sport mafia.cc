#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int n, m; int flag = 0;
    cin>>n>>m;
    int sum = 0;
    int j =1;
    
    if(n == 1 & m == 1)
    {
        cout<<0<<endl;
        return 0;
    }
    
    for(int i =1; i<=n; i++)
    {
        sum += j;
        if(sum - (n-i) == m)
        {
            flag = 1;
            break;
        };
        
        j++;
        
    }
    if(flag)
    cout<<n-j<<endl;
    else
    cout<<"wrong algo"<<endl;
    return 0;
}