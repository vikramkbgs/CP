#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    int n;
    cin >> n;
    int hashmap[n] = {0};
    int flag = 0;
    int p, q;
    cin >> p;
    int x[p];

    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
        hashmap[x[i] - 1] = 1;
    }

    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
        hashmap[y[i] - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (hashmap[i] == 1)
            continue;
        else
        {
            cout << "Oh, my keyboard!" << endl;
            flag = 1;
            break;
        }
    }

    if (flag != 1)
        cout << "I become the guy." << endl;
    return 0;
}