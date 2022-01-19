class Solution
{
public:
    int countDigit(int num)
    {
        int count = 0;

        while (num)
        {
            num = num / 10;
            count++;
        }

        return count;
    }

    int findNumbers(vector<int> &nums)
    {

        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (countDigit(nums[i]) % 2 == 0)
                count++;
        }
        return count;
    }
};