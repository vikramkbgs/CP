#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    int n;
    cin >> n;
    char temp;
    int cntA = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 'A')
            cntA++;
    }

    if (cntA > (n - cntA))
        cout << "Anton" << endl;
    else if (cntA < (n - cntA))
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
