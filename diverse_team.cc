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
void solve(int n, int k)
{
    vector<int> result;
    int HASHMAP[101] = {0};
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if (HASHMAP[temp] < 1)
        {
            result.pb(i);
        }
        HASHMAP[temp] = 1;
    }
    if (result.size() == k)
    {
        cout << "YES" << endl;
        output(result) << " ";
    }
    else
        cout << "NO" << endl;

    return;
}

int main()
{
    int n, k;
    cin >> n >> k;
    solve(n, k);

    return 0;
}