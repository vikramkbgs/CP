#include<bits/stdc++.h>
using namespace std;

int reverse(vector<int> &x, int i, int j)
{
    stack<int>stac;
    for(int k = i; k <= j; k++)
     stac.push(x[k]);
     
    int size = stac.size();
    while(!stac.empty())
    {
       x[i] = stac.top();
       stac.pop();
       i++;
    }
    return size;
}

int main()
{
    int t; cin>>t;
    int c = 1;
    while(t--)
    {
        int n; cin>>n; int cost = 0;
        vector<int>arr(n, 0);
        
        for(int i = 0; i<n; i++)
            cin>>arr[i];
            
        for(int i =0; i<n-1; i++)
        {
            int min = INT_MAX; int temp = 0;
            for(int j=i; j<n; j++)
            {
                if(min >= arr[j])
                 {
                     min = arr[j];
                     temp = j;
                 }
            }
            //cout<<"i:"<<i<<"j: "<<temp<<endl;
            cost += reverse(arr, i, temp);
            //for(int k =0; k<arr.size(); k++)
            //cout<<arr[k]<<" ";
        }
        cout << "Case #" << c << ": " << cost << endl;
        c++;
    }
    return 0;
}