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
    cout << flush;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, resultstr = "";
        cin >> s;
        for (int i = 1; i < 2 * n - 1; i++)
        {
            int resultchar;
            string temp;
            cin >> temp;
            for (int j = 0; j < m; j++)
            {
                int a, b;
                a = s[j];
                b = temp[j];
                resultchar = a ^ b;
                resultstr += (char)resultchar;
            }
            s = resultstr;
            resultstr = "";
        }
        cout << s << endl;
    }
    return 0;
}