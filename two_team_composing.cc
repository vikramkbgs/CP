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
void solve()
{
    int n;
    cin >> n;

    set<int> distinctNumbers;
    vector<int> sameNumbers;
    for (int i = 0; i < n; i++)
    {
        int temp, prevSizeDistinctNumbers;
        prevSizeDistinctNumbers = distinctNumbers.size();
        cin >> temp;

        distinctNumbers.insert(temp);
        if (distinctNumbers.size() == prevSizeDistinctNumbers)
            sameNumbers.pb(temp);
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (n > 1 && distinctNumbers.size() != 0 && sameNumbers.size() == 0)
    {
        cout << 1 << endl;
        return;
    }

    sort(sameNumbers.begin(), sameNumbers.end());

    int maxSameNumbersConsecutively = 0, previousNumber = sameNumbers[0], count = 1;
    for (int i = 1; i < sameNumbers.size(); i++)
    {
        if (sameNumbers[i] == previousNumber)
            count++;
        else
        {
            count = 0;
        }

        if (count >= maxSameNumbersConsecutively)
            maxSameNumbersConsecutively = count;

        previousNumber = sameNumbers[i];
    }

    int x = distinctNumbers.size();
    cout << min(maxSameNumbersConsecutively, x) << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}