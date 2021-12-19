#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count_100, count_200;
    count_100 = count_200 = 0;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 100)
            count_100++;
        if (temp == 200)
            count_200++;
    }
    // cout<<"100: "<<count_100;

    if (count_100 % 2 == 0 && count_200 % 2 == 0 || count_100 % 2 == 0 && count_100 > 0 || count_100 == 0 && count_200 % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}