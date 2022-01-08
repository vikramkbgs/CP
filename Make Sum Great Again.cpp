#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll sumOfArr(vector<ll> temp)
{
    ll sum = 0;
    for (ll vec : temp)
        sum += vec;

    return sum;
}

int main()
{
    ll n;
    ll s;
    cin >> n;
    cin >> s;

    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int maxsize = arr[arr.size() - 1];

    vector<ll> newarr(maxsize + 1, 0);
    ll diff = s - sumOfArr(arr);

    if (diff <= 0)
    {
        cout << arr.size() << endl;
        return 0;
    }

    for (ll temp : arr)
    {
        newarr[temp] = temp;
    }

    ll sum = 0;
    ll count = 0;
    for (ll i = 1; i <= maxsize + 1; i++)
    {
        if (sum < diff && newarr[i] == 0)
        {
            sum += i;
            newarr[i] = i;
            count++;
        }
    }

    /*
    for(ll temp : newarr)
    {
        cout<<temp<<" ";
    }
    */
    cout << count + n;
}