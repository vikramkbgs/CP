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
bool binarysearch(int a[], int l, int r, int item)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == item)
            return true;
        else if (a[mid] > item)
            return binarysearch(a, l, mid - 1, item);
        else
            return binarysearch(a, mid + 1, r, item);
    }
    return false;
}

void solve()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    read(a);
    for(int i =0; i<k; i++)
    {
        int item;
        cin>>item;
        if(binarysearch(a,0,n-1,item))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}