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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    int h, min;
    cin >> h >> min;

    int result_h, result_min, flag = 0;

    if (60 * h + min >= m + 1)
    {
        result_h = 0;
        result_min = 0;
        flag = 1;
    }

    for (int i = 1; i < n; i++)
    {
        int th, tmin;
        cin >> th >> tmin;
        int time1 = h * 60 + min;
        int time2 = th * 60 + tmin;
        if (time2 - time1 >= m * 2 + 2 && flag == 0)
        {
            result_h = (time1 + m + 1) / 60;
            result_min = (time1 + m + 1) % 60;
            flag = 1;
        }
        h = th;
        min = tmin;
    }
    if (flag)
        cout << result_h << " " << result_min;
    else
        cout << (60 * h + min + m + 1) / 60 << " " << (60 * h + min + m + 1) % 60;
    return 0;
}