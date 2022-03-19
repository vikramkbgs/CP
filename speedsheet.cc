/*------------------------------------------------------------Vikram Roy--------------------------------------------------*/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define read(x)           \
    for (auto &(i) : (x)) \
    cin >> i
#define write(x)          \
    for (auto &(i) : (x)) \
    cout << i

/*------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

// solution of problem
string type1(string s)
{
     int row, column;
     row = column = 0;
     int i =0;
     vector<char>alpha, digit;
     while(s[i] >= 'A' && s[i] <= 'Z')
     {
         alpha.pb(s[i]);
         i++;
     }
     while (s[i] >= 'A' && s[i] <= 'Z' && i < s.size())
     {
         digit.pb(s[i]);
         i++;
     }
     i =0;
     for(int j = alpha.size()-1; j>= 0; j--)
     {
         column += ((alpha[i]+1) - 'A')*((int)pow(26, i));
         i++;
     }
     i = 0;
     for (int j = digit.size() - 1; j >= 0; j--)
     {
         row += ((digit[i] + 1) - '0') * ((int)pow(10, i));
         i++;
     }
     
}

string type2(string s)
{

}

void solve()
{
    string s;
    cin>>s;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}