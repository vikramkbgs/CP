#include <bits/stdc++.h>
using namespace std;
vector<int> createVec(int n)
{
    vector<int> v;
    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    return v;
}
int getProduct(vector<int> v)
{
    return (accumulate(v.begin(), v.end(), 1, multiplies<int>()));
}
int getSum(vector<int> v)
{
    return accumulate(v.begin(), v.end(), 0);
}
int numDivisiblebysumOrProductofDigits(vector<int> arr)
{   int count = 0; 
    for (int i = 0; i< arr.size(); i++)
    {
        vector<int> res = createVec(arr[i]);
        int sum = getSum(res); 
        int prod = getProduct(res) ;
        if (sum != 0 &&  arr[i]/sum == 0)
        {
            count++;
        }
        else if (prod != 0 && arr[i]/prod == 0)
        {
            count++; 
        }
    }
    return count; 
}