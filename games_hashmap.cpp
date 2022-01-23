#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> guestUniform(101, 0);
    vector<int> hostUniform(n, 0);
    int uniformChange = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> hostUniform[i] >> temp;
        guestUniform[temp] += 1;
    }
    for (int i = 0; i < n; i++)
        uniformChange += guestUniform[hostUniform[i]];

    cout << uniformChange << endl;
    return 0;
}