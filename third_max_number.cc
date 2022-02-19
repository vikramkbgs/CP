class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long long mx1, mx2, mx3;
        mx1 = mx2 = mx3 = -10e12;
        int flag = 0;
        for (int q = 0; q < nums.size(); q++)
        {
            if (mx1 <= nums[q])
            {
                if (mx1 != nums[q])
                {
                    if (mx2 != nums[q] && mx2 != -10e12)
                        mx3 = mx2;
                    mx2 = mx1;
                }
                mx1 = nums[q];
            }

            if (mx2 <= nums[q] && nums[q] < mx1)
            {
                if (mx2 != nums[q] && mx2 != -10e12)
                    mx3 = mx2;
                mx2 = nums[q];
            }
            if (mx3 <= nums[q] && nums[q] < mx1 && nums[q] < mx2)
                mx3 = nums[q];
        }

        if (mx3 != -10e12)
            return mx3;

        return mx1;
    }
};