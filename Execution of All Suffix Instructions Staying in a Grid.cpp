class Solution
{
public:
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {

        vector<int> res;

        for (int j = 0; j < s.size(); j++)

        {
            int count = 0;
            vector<int> startPos1(2, 0);
            startPos1[0] = startPos[0];
            startPos1[1] = startPos[1];

            for (int i = j; i < s.size(); i++)
            {
                if ((startPos1[0] < 0 && startPos1[1] < 0) || (startPos1[0] > n - 1 && startPos1[1] > n - 1))
                    break;

                if (s[i] == 'L')
                {
                    startPos1[1]--;
                    count++;
                    //  cout<<count<<"count L"<<endl;
                    continue;
                }
                else if (s[i] == 'R')
                {
                    startPos1[1]++;
                    count++;
                    continue;
                }
                else if (s[i] == 'U')
                {
                    startPos1[0]--;
                    count++;
                    continue;
                }
                else if (s[i] == 'R')
                {
                    startPos1[0]++;
                    count++;
                    continue;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};