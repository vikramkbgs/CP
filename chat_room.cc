#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char key[] = {'h', 'e', 'l', 'l', 'o'};
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == key[flag])
            flag++;
        if (flag == 5)
            break;
    }
    if (flag == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}