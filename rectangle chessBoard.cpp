// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long rectanglesInChessBoard(long long N)
    {
        // code here
        long long int rectanglePlusSquares = ((N * (N + 1) * N * (N + 1)) / 4);
        long long int onlySquares = (long long int)(N * (N + 1) * (2 * N + 1)) / 6;

        return rectanglePlusSquares - onlySquares;
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
        cout << ob.rectanglesInChessBoard(N) << endl;
    }
    return 0;