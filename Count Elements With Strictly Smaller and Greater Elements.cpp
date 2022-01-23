class Solution
{
public:
    int countElements(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int count = 0;
        int countsame = 0;
        int i = 0;

        for (i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                continue;
            else
                break;
        }

        int j = nums.size() - 1;
        for (j = nums.size() - 1; j > 0; j--)
        {
            if (nums[j] == nums[j - 1])
                continue;
            else
                break;
        }

        for (i = i + 1; i <= j - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                countsame++;
                continue;
            }
            else
                count++;
        }

        return (count + countsame);
    }
};