#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    double onePercentage = (double)n / 100;
    double peopleNeeded = ceil(onePercentage * y);

    double result = peopleNeeded - x;
    if (result < 0)
    {
        cout << 0;
        return 0;
    }

    cout << (int)result;

    return 0;
}