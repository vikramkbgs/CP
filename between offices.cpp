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

    int cnt_SF, cnt_FS;
    cnt_SF = cnt_FS = 0;
    char first = letters[0];

    for (int i = 1; i < n; i++)
    {
        if (first != letters[i])
            if (first == 'S')
                cnt_SF++;
            else
                cnt_FS++;

        first = letters[i];
    }
    if (cnt_SF > cnt_FS)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}