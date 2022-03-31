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
    int a[n];
    read(a);
    sort(a, a+n);
    int queries;
    cin>>queries;
    for(int i =0; i<queries; i++)
    {
        int closest_left, closest_right;
        cin>>closest_left>>closest_right;
        int l = -1, r =n;
        while (l+1 < r)
        {
            int mid = (l+r)/2;
            if(a[mid] <= closest_left)
            l = mid;
            else
            r = mid;
        }
        int l_index = l+1;
        l = -1; r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (a[mid] < closest_right)
                l = mid;
            else
                r = mid;
        }
        int r_index = r+1;
        // cout<<"test "<<r_index<<" L "<<l_index<<endl;
        cout<<r_index-l_index<<" ";
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