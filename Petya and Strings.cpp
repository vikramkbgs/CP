#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0;

    for (i = 0; i < str1.size(); i++)
    {
        if (tolower(str1[i]) == tolower(str2[i]))
            continue;
        else if (tolower(str1[i]) > tolower(str2[i]))
        {
            cout << 1;
            break;
        }
        else if (tolower(str1[i]) < tolower(str2[i]))
        {
            cout << -1;
            break;
        }
    }
    if (i == str1.size())
        cout << 0;

    return 0;
}
