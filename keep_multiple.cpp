#define sz(x)       x.size()
#define all(x)      x.begin(),x.end()
#define rep(x,n)    for(int i= (x); i<(n); i++)

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(all(nums));
        
        rep(0, sz(nums))
        {
            if(nums[i] == original)
                original *=2; 
        }
        return original;
    }
};