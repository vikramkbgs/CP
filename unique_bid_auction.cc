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
    cin >> n;
    int HASHMAP1[n] = {0};
    int HASHMAP2[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        HASHMAP1[temp - 1]++;
        HASHMAP2[temp - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (HASHMAP1[i] == 1)
        {
            cout << HASHMAP2[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}