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
int totaldigit(int n)
{
    int count = 0;
    while(n>0)
    {
        count++;
        n /=10;
    }
    return count;
}
void solve()
{
    int n;
    cin>>n;
    int ndigit = totaldigit(n);
    cout<<(n%10 - 1)*10 + (ndigit*(ndigit+1))/2<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    solve();

    return 0;
}