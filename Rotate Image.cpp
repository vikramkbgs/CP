class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        vector<vector<int>> transpose;
        int n = matrix.size();
        int m = matrix[0].size();
        int temp[n][m];

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                temp[i][j] = matrix[i][j];
            }
        }

        matrix.clear();

        // algo

        for (int i = 0; i < n; i++)
        {
            vector<int> vtemp;
            for (int j = m - 1; j >= 0; j--)
            {
                vtemp.push_back(temp[j][i]);
            }
            matrix.push_back(vtemp);
        }
    }
};