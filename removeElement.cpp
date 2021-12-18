class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int count = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == val)
            {
                nums[i] = 0;
                count++;
            }

        sort(nums.begin(), nums.end(), greater<int>());
        return nums.size() - count;
    }
};