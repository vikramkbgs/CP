class Solution
{
public:
    int countPoints(string rings)
    {

        // vector<int>rods(9, 0);
        vector<int> G(10, 0);
        vector<int> R(10, 0);
        vector<int> B(10, 0);

        for (int i = 0; i < rings.size(); i++)
        {
            if (rings[i] == 'G')
            {
                G[rings[i + 1] - 48] = 1; // 0  ANSCI 48
                i++;
            }

            if (rings[i] == 'R')
            {
                R[rings[i + 1] - 48] = 1;
                i++;
            }

            if (rings[i] == 'B')
            {

                B[rings[i + 1] - 48] = 1;
                i++;
            }
        }

        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (R[i] == true && G[i] == true && B[i] == true)
                count++;
            // cout<<B[i]<<" ";
        }
        return count;
    }
};