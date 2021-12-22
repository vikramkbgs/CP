class Solution
{
public:
    string removeOccurrences(string s, string part)
    {

        size_t n = part.size();
        size_t found = s.find(part);
        while (found != string::npos)
        {
            s.erase(found, n);
            found = s.find(part);
        }

        return s;
    }
};