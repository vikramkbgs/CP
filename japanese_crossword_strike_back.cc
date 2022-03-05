/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// function for fast i/o
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return;
}

// solution of problem
void solve()
{
   int n, x;
   cin>>n>>x;
   int a[n];
   input(a);
   
   ll sum = 0;
   sum = accumulate(a, a+n, sum);
   
   if(sum + (n-1) == x)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   
   return;
   
}

int main()
{
    fast();
    solve();

    return 0;
}