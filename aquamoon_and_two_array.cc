/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        input(a);
        input(b);
        vector<int> add, subs;

        for (int i = 0; i < n; i++)
        {
            int temp1, temp2;
            temp1 = a[i];
            temp2 = b[i];

            if (temp1 < temp2)
            {
                while (temp1 < temp2)
                {
                    add.push_back(i + 1);
                    temp1++;
                }
            }
            else if (temp1 > temp2)
            {
                while (temp1 > temp2)
                {
                    subs.push_back(i + 1);
                    temp1--;
                }
            }
        }

        if (subs.size() == add.size())
        {
            cout << subs.size() << endl;
            for (int i = 0; i < subs.size(); i++)
                cout << subs[i] << " " << add[i] << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}