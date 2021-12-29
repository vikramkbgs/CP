class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> res;
        string temp;
        s += " ";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (!temp.empty())
                    res.push(temp);
                temp = "";
                continue;
            }
            else
            {
                temp += s[i];
            }
        }
        string result;
        while (!res.empty())
        {
            result += res.top();
            res.pop();
            if (!res.empty())
                result += " ";
        }

        return result;
    }
};