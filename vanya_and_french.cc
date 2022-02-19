#include <bits/stdc++.h>
#define ll long long
#define sz(x) (x).size()
#define rev(x) reverse(x.begin(), s.end())
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int width = n;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > h)
            width++;
    }
    cout << width << endl;
    return 0;
}
