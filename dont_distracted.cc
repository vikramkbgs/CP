#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        string s, temp;
        cin >> temp;
        s = temp;
        sort(s.begin(), s.end());
        temp += " ";
        s += " ";
        int conjugatingmap[26] = {0};
        int countmap[26] = {0};
        int count = 1, MX = 1;
        for (int i = 0; i < sz(s) - 1; i++)
        {
            if (temp[i] == temp[i + 1])
                count++;
            else
            {
                conjugatingmap[temp[i] - 'A'] = count;
                count = 1;
            }

            if (s[i] == s[i + 1])
                MX++;
            else
            {
                countmap[s[i] - 'A'] = MX;
                MX = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (conjugatingmap[i] == countmap[i])
                continue;
            else
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define sz(x) (x).size()
using namespace std;

int main()
{ 
  // inserting data in multimap
  int n, s;
  cin>>s>>n;
  ll mx = s;
  int count = 0;
  multimap<int, int>x;
  multimap<int,int>::iterator it;
  
  for(int i =0; i<n; i++)
  {
      int tempx, tempb; // tempx  temprory bonus, tempb temprory bonus
      cin>>tempx>>tempb;
      x.insert(pair<int, int>(tempx, tempb));
  }
  
  for (it=x.begin(); it!=x.end(); ++it)
    {
        if( (*it).first < mx)
        {
            mx += (*it).second;
            count++;
        }
        else
        break;
    }
    if(count == n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
return 0;  
}
