class Solution
{
public:
    int romanToInt(string s)
    {

        vector<int> alpha(26, 0);

        alpha['I' - 'A'] = 1;
        alpha['V' - 'A'] = 5;
        alpha['X' - 'A'] = 10;
        alpha['L' - 'A'] = 50;
        alpha['C' - 'A'] = 100;
        alpha['D' - 'A'] = 500;
        alpha['M' - 'A'] = 1000;

        if (s.size() == 1)
            return alpha[s[0] - 'A'];

        int sum = 0;
        int count = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            int next = alpha[s[i + 1] - 'A'];
            int prev = alpha[s[i] - 'A'];

            if (prev < next)
            {
                sum += next - prev;
                i++;
                count++;
            }
            else
            {
                sum += prev;
            }
            count++;
        }
        //  cout<<"count: "<<count<<endl;

        if (s.size() != count)
        {
            int temp = s.size() - 1;
            sum += alpha[s[temp] - 'A'];
        }

        return sum;
    }
};