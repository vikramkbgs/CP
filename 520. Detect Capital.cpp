class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int i, j;
        i = 0;
        j = 1;

        if (word.size() == 1)
            return true;

        if (word[i] >= 'A' && word[i] <= 'Z' 
        && word[j] >= 'A' && word[j] <= 'Z')
        {
            while (j < word.size())
            {
                if (word[j] >= 'A' && word[j] <= 'Z')
                    j++;
                else
                    return false;
            }
            return true;
        }
        else if (word[i] >= 'a' && word[i] <= 'z' 
        && word[j] >= 'a' && word[j] <= 'z')
        {
            while (j < word.size())
            {
                if (word[j] >= 'a' && word[j] <= 'z')
                    j++;
                else
                    return false;
            }
            return true;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z' 
        && word[j] >= 'a' && word[j] <= 'z')
        {
            while (j < word.size())
            {
                if (word[j] >= 'a' && word[j] <= 'z')
                    j++;
                else
                    return false;
            }
            return true;
        }
        return false;
    }
};