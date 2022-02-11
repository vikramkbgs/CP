#include <bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    int i = 1;
    while(i < n)
    {
      int basesum = 0;
      int num = n;
      int j = n-i;
      while(num > 0)
      {
          basesum += num%j;
          num -= num%j;
          num /=j;
      }
      i++;
      sum +=basesum;
    }
    cout<<sum<<endl;
    return 0;
}