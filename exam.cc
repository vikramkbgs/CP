#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int surplus = k - n*2;

    if(surplus >= n)
        cout<<0<<endl;
    else
        cout<<n - surplus<<endl;
    return 0;
}