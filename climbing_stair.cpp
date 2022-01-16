class Solution
{
public:
    int hashMap[45] = {0};
    // hashMap[0] = 1;
    // hashMap[1] = 2;

    int climbStairs(int n)
    {

        // base case
        if (n <= 2)
            return n;

        if (!hashMap[n - 1])
        {
            hashMap[n - 1] = climbStairs(n - 1) + climbStairs(n - 2);
        }

        return hashMap[n - 1];
    }
};