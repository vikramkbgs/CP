#define sz(x)               x.size()
#define rp(i, x, n)         for(int (i) = (x); (i)<(n); (i++))
#define all(x)              (x).begin(),(x).end()
#define pb                  push_back
class Solution {
public:
    
    
    
    vector<int> maxScoreIndices(vector<int>& nums) {
        
        int cnt_0, cnt_1; cnt_0 = cnt_1 = 0;
        vector<int>res;
        vector<int>temp;
        
        rp(i, 0, sz(nums))
        {
            if(nums[i] == 1)
                cnt_1++;
            else
                cnt_0++;
        }
        
        if(cnt_1 == sz(nums))
        {
            res.pb(0);
            return res;
        }
       else if(cnt_0 == sz(nums))
        {
            res.pb(sz(nums));
            return res;
        }
        else
        {
        cnt_0 = 0;
        rp(i, 0, sz(nums))
        {
            if(i == 0)
            {
                temp.pb(cnt_0 + cnt_1);
            }
            
            if(nums[i] == 0)
                cnt_0++;
            if(nums[i] == 1)
                cnt_1--;
            temp.pb(cnt_0 + cnt_1);
        }
            
        }
        int max = *max_element(all(temp));
        
        rp(i, 0, sz(temp))
        {
            if(temp[i] == max)
                res.pb(i);
        }
        
        return res;
    }
};