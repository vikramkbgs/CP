#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int>a ={1, 2, 3 , 9, 6 , 3,5};
    vector<int>b ={8, 3, 6, 5, 1};
    
        a.insert(a.begin(), b.begin(), b.end());
    
    sort(a.begin(), a.end());
    //for(int i =0; i<a.size(); i++)
    //{
       // cout<<a[i]<<" ";
   // }
    cout<<endl;
    if(a[0] != a[1])
        cout<<a[0]<<" ";
    for(int i =1; i<a.size()-1;)
    {
        if(a[i] == a[i+1] || a[i] == a[i-1])
            i++;
        else
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    if(a[a.size()-1] != a[a.size()-2])
        cout<<a[a.size()-1]<<" ";
}