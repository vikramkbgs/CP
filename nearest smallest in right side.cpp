// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void immediateSmaller(int *arr, int n)
    {
        //  code here

        stack<int> lifo;
        for (int i = n - 1; i >= 0; i--)
        {
            if (lifo.empty())
            {
                lifo.push(arr[i]);
                arr[i] = -1;
            }
            else if (!lifo.empty() && lifo.top() < arr[i])
            {
                int temp = arr[i];
                arr[i] = lifo.top();
                lifo.push(temp);
            }
            else if (!lifo.empty() && lifo.top() >= arr[i])
            {
                while (!lifo.empty() && lifo.top() >= arr[i])
                    lifo.pop();

                if (lifo.empty())
                {
                    lifo.push(arr[i]);
                    arr[i] = -1;
                }
                else
                {
                    int temp = arr[i];
                    arr[i] = lifo.top();
                    lifo.push(temp);
                }
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends