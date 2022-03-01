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
    int n;
    cin >> n;
    int im[n]; // interesting minute instance

    input(im);
    int start;
    start = 0;
    for (int i = 0; i < n; i++)
    {
        if (im[i] - start > 15)
        {
            cout << start + 15 << endl;
            return 0;
        }
        start = im[i];
    }
    cout << 90 << endl;
    return 0;
}