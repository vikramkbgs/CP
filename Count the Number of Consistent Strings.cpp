class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {

        vector<int> alph(26, 0);

        for (int i = 0; i < allowed.size(); i++)
        {
            int temp = allowed[i] - 'a';
            alph[temp] = 1;
        }

        int count = 0;

        for (int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            int j = 0;

            for (j = 0; j < temp.size(); j++)
            {
                int sindex = temp[j] - 'a';

                if (alph[sindex])
                    continue;
                else
                    break;
            }
            if (j == temp.size())
                count++;
        }
        return count;
    }
};