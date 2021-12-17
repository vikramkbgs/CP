class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> res;

        if (nums.size() == 1 && k == 1 || k == 0)
            return;

        while (k > nums.size())
            k = k % nums.size();

        for (int i = nums.size() - k; i < nums.size(); i++)
            res.push_back(nums[i]);

        for (int i = 0; i < nums.size() - k; i++)
            res.push_back(nums[i]);

        for (int i = 0; i < res.size(); i++)
            nums[i] = res[i];

        return;
    }
};