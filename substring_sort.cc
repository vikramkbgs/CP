/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// function for fast i/o
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return;
}

// solution of problem
void solve()
{
    int n, flag = true;
    cin >> n;
    multimap<int, string> si;
    multimap<int, string>::iterator it;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        size_t t = temp.size();
        si.insert(pair<int, string>(t, temp));
    }

    it = si.begin();
    size_t length1, length2;
    string str1, str2;
    // cout<<(*it).second<<endl;
    str1 = (*it).second;
    length1 = (*it).first;

    for (it = ++it; it != si.end(); it++)
    {
        length2 = (*it).first;
        str2 = (*it).second;

        // cout<<str1<<"  ====   " <<str2<<endl;
        if (length1 == length2 &&
            str1 != str2)
        {
            flag = false;
            break;
        }

        size_t found = str2.find(str1);
        if (found != string::npos)
        {
            length1 = length2;
            str1 = str2;
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (it = si.begin(); it != si.end(); it++)
        {
            cout << (*it).second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return;
}

int main()
{
    solve();

    return 0;
}