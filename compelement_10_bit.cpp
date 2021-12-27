class Solution
{
public:
    int onesComplement(int N)
    {
        // code here
        int flag = 1;
        int n = N;
        while (flag <= N)
        {

            n ^= flag;
            flag = flag << 1;
        }
        return n;
    }
};