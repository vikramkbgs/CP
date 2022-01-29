#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    vector<int>arr(d+1, 1);
    arr[0] = 0;

    for (int i = 1; k * i <= d || l * i <= d 
        || m * i <= d || n * i <= d; i++)
    {
        if (k * i <= d)
            arr[k * i] = 0;
        if (l * i <= d)
            arr[l * i] = 0;
        if (m * i <= d)
            arr[m * i] = 0;
        if (n * i <= d)
            arr[n * i] = 0;

            cout<<"test: i"<<i<<endl;
    }
    int count = 0;
    for(int i =0; i<=d; i++)
       {
           if (arr[i])
               count++;
            //cout<<arr[i]<<" ";
       } 
   // cout<<d-count<<endl;

    return 0;
}