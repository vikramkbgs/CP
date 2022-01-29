#define sz(x) (x).size()

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int hashMap[201] = {0};

        int orsize = sz(nums);
        if (nums.size() == 0)
            return 0;

        for (int i = 0; i < sz(nums); i++)
        {
            hashMap[nums[i] + 100] += 1;
        }
        int count = 0;

        for (int i = 0; i < sz(nums); i++)
            if (hashMap[nums[i] + 100] > 1)
            {
                nums.erase(nums.begin() + i);
                hashMap[nums[i] + 100] -= 1;
                count++;
                i--;
            }
        return orsize - count;
    }
};