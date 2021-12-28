class Solution
{
public:
    string reverseWords(string s)
    {

        int start = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == ' ')
            {
                int end = i;
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        reverse(s.begin() + start, s.begin() + s.size());
        return s;
    }
};