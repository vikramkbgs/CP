class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int>res;
        stack<int>stac;
       
        for(int i = temperatures.size()-1; i>=0; i--)
        {
            if(stac.empty())
            {
                stac.push(temperatures[i]);
                res.push_back(0);
            }
            else
            {
                if(stac.top() > temperatures[i])
                {
                    stac.push(temperatures[i]);
                    res.push_back(1);
                }
                else
                {
                   int count = 1; stack<int> temp;
                    while(!stac.empty() && stac.top() <= temperatures[i])
                    {
                        temp.push(stac.top());
                        stac.pop();
                        count++;
                    }
                    if(stac.empty())
                        res.push_back(0);
                    else
                        res.push_back(count);
                    
                    while(!temp.empty())
                    {
                        stac.push(temp.top());
                        temp.pop();
                    }
                    stac.push(temperatures[i]);
                }
            }
        }       
        reverse(res.begin(), res.end());
        
       return res;
    }
};