#include<bits/stdc++.h>
using namespace std;
vector<int>prime;

void primes(int n)
{
    prime.push_back(2);
    for(int i =3; i<=n; i++)
    {
        int j=2;
        
        for(j=2; j<=sqrt(i); j++)
            if(i % j == 0)
                break;
                
        if(j > sqrt(i))
        prime.push_back(i);
    }
    return;
}

int main()
{
    primes(10000);
    int t;
    cin>>t;
    
    while(t--)
    {
        int n; cin>>n;
        for(int i =0; i<n; i++)
            cout<<prime[i]<<" ";
            
        cout<<"\n";
    }
    return 0;
}