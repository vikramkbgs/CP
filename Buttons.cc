#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{

    int n;
    cin >> n;
    int finalPushes = n;
    ll pushes = 0;
    int i = 1;
    while (n > 1)
    {
        pushes += i * (--n);
        i++;
    }
    cout << pushes + finalPushes << endl;
    return 0;
}