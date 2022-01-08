#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull; 
int getProduct(vector<int> v)
{
    return (accumulate(v.begin(), v.end(), 0, multiplies<int>())); 
} 
int getSum(vector<int>v)
{
    return accumulate(v.begin(), v.end(), 0); 
}
vector <int> createVec(int n)
{
    vector<int> v; 
    while (n != 0)
    {
        v.push_back(n % 10); 
        n/= 10; 
    }
    return v; 
}
int main()
{
    // inside loop
    // vector<int> res = createVec(arr[i]); 
    // if (getSum(res)/arr[i] == 0) || (getProduct(res)/arr[i] == 0))
    // {
    //     count++; 
    // }
    in
}