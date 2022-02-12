#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int main()
{
  int n;
  cin >> n;
  ll sum = 0;
  int i = 1;
  int num = n;
  int j = n - i;
  while (i < n && j > 1)
  {
    num = n;
    int basesum = 0;
    while (num > 0)
    {
      basesum += num % j;
      num = num - (num % j);
      num = num / j;
    }
    i++;
    sum += basesum;
    j = n - i;
  }
  int common = gcd(n - 2, sum);
  cout << sum / common << "/" << (n - 2) / common << endl;
  return 0;
}