class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        multiset<int> res;

        for (int i = 0; i < nums.size(); i++)
            res.insert(nums[i] * nums[i]);

        for (auto i : res)
            cout << i << " ";

        vector<int> result;

        for (auto i : res)
            result.push_back(i);

        return result;
    }
};