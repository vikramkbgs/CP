class Solution
{
public:
    void swap(char &x, char &y)
    {
        char temp = x;
        x = y;
        y = temp;
    }
    string reverseStr(string s, int k)
    {

        // case1
        if (k > s.size())
            k = s.size();

        int flag = k;

        for (int i = 0; i < s.size() - 1; i++)
        {

            if (flag == k)
            {
                int innerloop = i + k - 1;

                // case2
                if (innerloop > s.size())
                    innerloop = s.size();

                reverse(s.begin() + i, s.begin() + innerloop + 1);
                i = i + k - 1;
                flag = 0;
            }
            else
                flag++;
        }
        return s;
    }
};