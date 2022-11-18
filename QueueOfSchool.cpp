#include <bits/stdc++.h>
using namespace std;

void swap(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;
}

int main()
{

    int n, time;
    cin >> n >> time;

    string str;
    cin >> str;

    while (time > 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (str[i - 1] == 'B' && str[i] == 'G')
            {
                swap(str[i - 1], str[i]);
                i++;
            }
        }
        time--;
    }
    cout << str << endl;
}