class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         
    int min;
    vector<int>res;
    pair<int, int>max = make_pair(0, 0);
    int flag1 = 0;
    int flag2 = 0;
    
    while(flag1 < prices.size())
    {
        min=INT_MAX; max = make_pair(0, 0);
        //cout<<"test"<<endl;
    for(int i= flag1; i<prices.size(); i++)
        if(max.second <= prices[i])
        {  
            max.second = prices[i];
            max.first = i;
        }
        
    for(int i= flag2; i<=max.first; i++)
        if(min > prices[i])
            min = prices[i];
        //cout<<"max: "<<max.second<<endl;
        //cout<<"min: "<<min<<endl;
        
        if(min >= max.second)
        {
            flag1++;   
        }   
        else 
        {
            res.push_back(max.second-min);
            flag2++;
            flag1++; 
        }
    }
       // for(int i =0; i<res.size(); i++)
       // cout<<"res"<<res[i]<<" ";
        if(res.empty())
            return 0;
        return *max_element(res.begin(),res.end());
    }
};
