class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        sort(strs.begin(), strs.end());

        // testcase1
        if (strs.size() == 1)
            return strs[0];
        else if (strs[0] == "")
            return strs[0];

        string str1 = strs[0];
        string str2 = strs[1];
        string res;

        for (int i = 0; i < str1.size() && i < str2.size(); i++)
            if (str1[i] == str2[i])
                res += str1[i];
            else
                break;

        for (int i = 2; i < strs.size(); i++)
        {
            string s = strs[i];
            for (int k = 0; k < res.size() && k < s.size(); k++)
                if (s[k] == res[k])
                    continue;
                else
                {
                    res.erase(res.begin() + k, res.end());
                    break;
                }
        }

        return res;
    }
};