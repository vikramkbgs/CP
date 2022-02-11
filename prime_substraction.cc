#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

vector<int> primes(int n)
{
    vector<int> res;
    res.pb(2);
    for (int i = 3; i < n; i++)
    {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            res.pb(i);
    }
    return res;
}

int main()
{

    // vector<int>prime = primes(100000);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        /* ll differce = x-y;
         int flag = 0;
         for(int i =0; i<sz(prime); i++)
         {
             if(prime[i] <= differce && differce%prime[i] == 0 )
             {
                 flag = 1;
                 cout<<"YES"<<endl;
                 break;
             }

             if(prime[i] > differce)
             break;
         }

         if(!flag)
         cout<<"NO"<<endl;
         */
        ((x - y) > 1) ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
    return 0;
}