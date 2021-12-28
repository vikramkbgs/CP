class Solution
{
public:
    void swap(char &x, char &y)
    {
        char temp = x;
        x = y;
        y = temp;
    }
    string reverseVowels(string s)
    {
        int i = 0, j = s.size() - 1;

        for (i = 0; i <= j;)
        {
            // cout<<"i: "<<i<<"j: "<<j<<endl;
            if (tolower(s[i]) != 'a' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u' &&
                tolower(s[i]) != 'i' && tolower(s[i]) != 'e')
            {
                i++;
                continue;
            }

            if (tolower(s[j]) != 'a' && tolower(s[j]) != 'o' && tolower(s[j]) != 'u' &&
                tolower(s[j]) != 'i' && tolower(s[j]) != 'e')
            {
                j--;
                continue;
            }
            // cout<<s[i]<<" test"<<s[j]<<endl;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};