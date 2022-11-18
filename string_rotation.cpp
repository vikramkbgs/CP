#include <iostream>
#include <string>
using namespace std;

int areRotations(string str1, string str2)
{
    int count, j = 0;
    string str3 = str1;

    for (int i = 0; i < str1.size(); i++)
        if (str1[i] == str2[0])
        {
            count = i;
            break;
        }
    for (int i = count; i < str1.size(); i++)
    {
        str3[j] = str1[i];
        j++;
    }

    int i = 0;
    for (j, i; i < count; j++, i++)
        str3[j] = str1[i];

    if (str2 == str3)
        return 1;
    else
        return 0;
}

int main()
{
    string s1 = "ABCD", s2 = "CDAB";
    cout << areRotations(s1, s2);

    return 0;
}