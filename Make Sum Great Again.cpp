#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int> arr;
void BSS(int n)
{
    deque<pair<int, int>> q;
    q.push_front({1, n});

    while (!q.empty())
    {
        pair<int, int> current = q.front();

        int mid = (current.first + current.second) / 2;

        arr.push_back(mid);

        if (mid > current.first)
            q.push_back({current.first, mid - 1});

        if (mid < current.second)
            q.push_back({mid + 1, current.second});

        q.pop_front();
    }
}
/*
int binarySearch(vector<int>arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        BSS(n);

        for (int i = 0; i < arr.size(); i++)
            if (k == arr[i])
            {
                cout << i + 1 << " ";
                break;
            }
        cout << endl;

        // for(int temp : arr)
        // cout<<temp<<" ";
        arr.clear();
    }
}