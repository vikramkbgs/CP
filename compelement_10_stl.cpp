class Solution
{
public:
    string onesComplement(string s, int N)
    {
        // code here
        string temp;
        for (int i = 0; i < N; i++)
        {
            // cout<<s[i]<<endl;
            if (s[i] == '0')
            {
                // cout<<s[i]<<endl;
                temp.append("1");
            }
            else
                temp.append("0");
        }
        return temp;
    }
};