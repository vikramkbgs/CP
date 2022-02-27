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
    string s;
    cin >> s;
    set<string> autodic; // list of auto dictionary
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        int j = 0;
        for (j = 0; j < s.size(); j++)
        {
            if (s[j] == temp[j])
                continue;
            else
                break;
        }
        if (j == s.size())
            autodic.insert(temp);
    }
    if (!autodic.empty())
        cout << *(autodic.begin()) << endl;
    else
        cout << s << endl;
    return 0;
}