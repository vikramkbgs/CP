#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int i, j;
    i = sz(s1);
    j = sz(s2);
    int n;

    if (i >= j)
        n = i;
    else
        n = i;

    int count = 0;

    for (int k = 0; k < n; k++)
    {
        if (s1[i - n + k] == s2[j - n + k])
            count++;
        else
            count = 0;
    }
    cout << i + j - 2 * count << endl;
    return 0;
}