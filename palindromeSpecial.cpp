bool checkPalindrome(string s)
{
    // Write your code here.
    int i = 0, j = s.size() - 1;

    while (i <= j)
    {
        if (s[i] == ' ' || s[i] >= 32 && s[i] <= 47 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 ||
            s[i] >= 123 && s[i] <= 126)
        {
            // cout<<(int)s[i]<<"s[i]"<<endl;
            i++;
            continue;
        }
        if (s[j] == ' ' || s[j] >= 32 && s[j] <= 47 || s[j] >= 58 && s[j] <= 64 || s[j] >= 91 && s[j] <= 96 ||
            s[j] >= 123 && s[j] <= 126)
        {
            j--;
            continue;
        }
        if (tolower(s[i]) == tolower(s[j]))
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}