class Solution
{
public:
    string makeGood(string s)
    {
        int i = 0;
        for (i; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
                continue;

            if (toupper(s[i]) == (s[i + 1]))
            {
                // cout<<"erase: "<<s[i]<<endl;
                s.erase(i, 2);
                i = -1;
            }

            else if ((s[i]) == toupper(s[i + 1]))
            {
                s.erase(i, 2);
                i = -1;
            }
        }
        return s;
    }
};