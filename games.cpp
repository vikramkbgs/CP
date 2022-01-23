#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> host(n, 0);
    vector<int> guest(n, 0);
    int uniformChange = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> host[i] >> guest[i];
    }

    for (int i = 0; i < host.size(); i++)
    {
        for (int j = 0; j < guest.size(); j++)
        {
            if (host[i] == guest[j])
                uniformChange++;
        }
    }
    cout << uniformChange << endl;
    return 0;
}