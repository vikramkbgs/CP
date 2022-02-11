#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

vector<int> hashmap(int n)
{
    vector<int> res;
    res.pb(0);
    res.pb(0);
    res.pb(2);
    for (int i = 3; i < n; i++)
    {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            res.pb(i);
        else
            res.pb(0);
    }
    return res;
}
vector<int> primes(int n)
{
    vector<int> res;
    res.pb(2);
    for (int i = 3; i < n; i++)
    {
        int flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            res.pb(i);
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> prime = primes(n + 1);
    vector<int> table = hashmap(n + 1);
    int count = 0;

    for (int i = 0; i < prime.size() - 1; i++)
    {
        if (prime[i] + prime[i + 1] + 1 <= n && table[prime[i] + prime[i + 1] + 1])
            count++;
    }
    if (count >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}