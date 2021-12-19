#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<char> res;
    vector<char>::iterator it;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'e' || str[i] == 'y' ||
            str[i] == 'A' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I' || str[i] == 'E' || str[i] == 'Y')
        {
            // i++;
            continue;
        }
        else
        {
            str[i] = toupper(str[i]);
            str[i] = tolower(str[i]);
            res.push_back('.');
            res.push_back(str[i]);
        }

    for (it = res.begin(); it != res.end(); it++)
        cout << *it;

    return 0;
}
