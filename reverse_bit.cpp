// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        //code here
        unsigned int res = 0;
        int j = 0;
        int leftmostBit = 0;
        
         for(int i = 31; i>=0; --i)
        {
           if((n & (1<<i)) != 0)
           {
               break;
           }
           else
           leftmostBit++;
        }
        
       // cout<<"first: "<<leftmostBit<<endl;
        
        for(int i = 31 - leftmostBit; i>=0; --i)
        {
           if((n & (1<<i)) != 0)
           {
               res = res | (1 << j);
               j++;
               
              // cout<<res<<"test"<<endl;
           }
           else
                j++;
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout<< ob.reverseBits(N) <<"\n";
        
    }
    return 0;
}
  // } Driver Code Ends