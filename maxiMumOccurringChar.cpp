// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        vector<int> a(26, 0);
        for (int i = 0; i < str.size(); i++)
        {
            int j = str[i] - 97;
            a[j]++;
        }
        int max = *max_element(a.begin(), a.end());

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == max)
                return (char)(i + 97);
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
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
} // } Driver Code Ends