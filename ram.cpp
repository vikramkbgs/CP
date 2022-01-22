#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> rn(n, 0);
        vector<int> ri(n, 0);

        for (int i = 0; i < n; i++)
            cin >> rn[i];

        for (int i = 0; i < n; i++)
            cin >> ri[i];

        for (int i = 0; i < ri.size(); i++)
        {

            // cout<<"i: "<<i<<"rn"<<rn[i]<<" <="<<"k"<<k<<endl;
            if (rn[i] <= k)
            {

                k = k + ri[i];
                ri.erase(ri.begin() + i);
                rn.erase(rn.begin() + i);
                i = -1;
            }
        }
        cout << k << endl;
    }
    return 0;
}