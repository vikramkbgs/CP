/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define read(x)           \
    for (auto &(i) : (x)) \
    cin >> i
#define write(x)          \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// solution of problem
void solve()
{
    int n;
    cin>>n;
    if(n == 1)
   {
       cout << 1;
       return;
   } 
   else if(n == 2)
   {
       cout << 2;
       return;
   }
   else if (n == 3)
   {
       cout << 21;
       return;
   }
    if((n-4)%3)
    {
        int sum = 0, flag = 1;
        while(sum < n)
        {
            if(flag)
            {
                sum += 2;
                cout<<2;
                flag = 0;
            }
            else
            {
                sum += 1;
                cout<<1;
                flag = 1;
            }
        }
    }
    else{
        int sum = 0, flag = 0;
        while (sum < n)
        {
            if (flag)
            {
                sum += 2;
                cout << 2;
                flag = 0;
            }
            else
            {
                sum += 1;
                cout << 1;
                flag = 1;
            }
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        {
            solve();
            cout<<"\n";
        }

    return 0;
}