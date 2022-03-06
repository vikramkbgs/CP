/*------------------------------------------------------------Vikram Roy---------------------------------------------------------*/
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

// solution of problem
void solve()
{
    int n;
    cin >> n;
    ll sumFirst, sumSecond, sumThird;
    sumFirst = sumSecond = sumThird = 0;

    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        sumFirst += temp;
    }
    for (int i = 0; i < n - 1; i++)
    {
        ll temp;
        cin >> temp;
        sumSecond += temp;
    }
    for (int i = 0; i < n - 2; i++)
    {
        ll temp;
        cin >> temp;
        sumThird += temp;
    }
    cout << sumFirst - sumSecond << endl;
    cout << sumSecond - sumThird << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}