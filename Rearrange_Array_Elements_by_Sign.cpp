class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {

        vector<int> positive;
        vector<int> negative;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                negative.push_back(nums[i]);
            else
                positive.push_back(nums[i]);
        }

        for (int i = 0; i < negative.size(); i++)
        {
            res.push_back(positive[i]);
            res.push_back(negative[i]);
        }

        return res;
    }
};