#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define sz(x) (x).size()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int hashmap[n] = {0};
        int creams[n];
        for (int i = 0; i < n; i++)
            cin >> creams[i];

        int j = n - 1;
        int prev_cream = creams[j];
        while (j >= 0)
        {
            if (creams[j] >= prev_cream)
                prev_cream = creams[j];

            if (prev_cream > 0)
                hashmap[j] = 1;

            j--;

            if (prev_cream > 0)
                prev_cream--;
        }
        for (int i = 0; i < n; i++)
            cout << hashmap[i] << " ";
        cout << endl;
    }
    return 0;
}