// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long squaresInChessBoard(long long n)
    {
        // code here

        long long int result = (long long int)(n * (n + 1) * (2 * n + 1)) / 6;

        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;

        cin >> N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
} // } Driver Code Ends