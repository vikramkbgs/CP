
int sumArray(vector<int>temp)
{
    int sum =0;
    for(int x: temp)
        sum +=temp;
    
    return sum;
}
int minSum(vector<int>temp)
{
    return *min_element(temp.begin(), temp.end());
}

int sumArray(vector<int>temp)
{
    int sum =0;
    for(int x: temp)
        sum +=x;
    
    return sum;
}

int maxScore(int n, vector<int>arr) {
    
    vector<int>res;
    //vector<int>arr = {5,-1,5};
    for(int i =1; i<arr.size(); i++)
    {
        vector<int>temp;
        for(int j =0; j<i; j++)
        {
            temp.push_back(arr[j]);
        }
        int result =  sumArray(temp) + (minSum(temp)*temp.size());
        res.push_back(result);
    }
    
    return *max_element(res.begin(),res.end());
}


