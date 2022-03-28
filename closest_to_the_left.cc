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
int binarysearch(int a[], int l, int r, int item)
{
    while (l+1 < r)
    {
        int mid =(r+l) / 2;
        if (a[mid] <= item)
            l = mid;
        else
            r = mid;
    }
    return l+1;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    read(a);
    for (int i = 0; i < k; i++)
    {
        int item;
        cin >> item;
        cout << binarysearch(a, -1, n, item) << endl;
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