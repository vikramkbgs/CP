#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    int a, b; a = b = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            a = 1;
            i += 2;
        }
        else
        {
            if (a && b)   cout << " ";
            a = 0; b = 1;
            cout << str[i];
        }
    }
    return 0;
}