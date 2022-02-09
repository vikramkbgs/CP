#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int travel, count_p, count_c;
    travel = count_p = count_c = 0;

    for (int i = 0; i < sz(s); i++)
    {
        if(s[i] == 'P')
            {
                count_p++;
                continue;
            }
        while(count_p > 0)
        {
            count_p -= 5;
            travel++;
        } 
        if(count_p <0)
            count_p = 0;
    }
    for (int i = 0; i < sz(s); i++)
    {
        if (s[i] == 'C')
        {
            count_c++;
            continue;
        }
        while (count_c > 0)
        {
            count_c -= 5;
            travel++;
        }
        if (count_c < 0)
            count_c = 0;

        cout<<travel<<endl;
    }
    return 0;
}