class Solution
{
public:
    int countCapital(string x)
    {
        int count = 0;
        for (int i = 0; i < x.size(); i++)
            if (x[i] >= 'A' && x[i] <= 'Z')
                count++;
        return count;
    }

    bool detectCapitalUse(string word)
    {

        int countCap, countSmall;

        countCap = countCapital(word);
        countSmall = word.size() - countCap;

        if (countCap == word.size())
            return true;

        if (countSmall == word.size())
            return true;

        if (word[0] >= 'A' && word[0] <= 'Z' 
            && countSmall == word.size() - 1)
            return true;

        return false;
    }
};