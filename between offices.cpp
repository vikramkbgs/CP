#include <bits/stdc++.h>
#define sz(x) (x).size()
using namespace std;

int main()
{
    int n;
    cin >> n;
    char letters[n];
    for (int i = 0; i < n; i++)
        cin >> letters[i];

    if (letters[0] == 'S' && letters[n - 1] == 'F')
        cout << "YES" << endl;
    else
        cout << "NO";
    return 0;
}