class Solution
{
public:
    int search(int A[], int N)
    {
        // code
        int res = 0;
        for (int i = 0; i < N; i++)
            res ^= A[i];

        return res;
    }
};