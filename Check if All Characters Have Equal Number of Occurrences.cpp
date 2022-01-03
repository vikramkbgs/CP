class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        vector<int> alpha(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            alpha[s[i] - 'a']++;
        }

        int max = *max_element(alpha.begin(), alpha.end());

        for (int i = 0; i < 25; i++)
        {
            if (alpha[i] == max || alpha[i] == 0)
                continue;
            else
                return false;
        }
        return true;
    }
};