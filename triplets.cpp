#include <bits/stdc++.h>
using namespace std; 
int numTriiplets(vector<int> arr)
{
    int count = 0; 
    for (int i = 0; i<2; i++)
    {
        if ((arr[i] + arr[i + 1] + arr[i + 2] / 3) == int(arr[i] + arr[i + 1] + arr[i + 2] / 3))
            count++; 
    }return count; 
}
int main()
{
    vector<int> v = {0,2, 3, 4}; 
    cout << numTriiplets(v) << endl; 
}