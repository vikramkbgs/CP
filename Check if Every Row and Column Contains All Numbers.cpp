class Solution
{
public:
    bool checkValid(vector<vector<int>> &matrix)
    {

        int n = matrix.size();

        // row check
        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> hash(n, 0);
            for (int j = 0; j < matrix[i].size(); j++)
            {
                hash[matrix[i][j] - 1] = matrix[i][j];
            }
            // cout<<"test :"<<i<<endl;

            // printV(hash);
            //  cout<<endl;

            for (int k = 0; k < matrix.size(); k++)
            {
                // cout<<hash[k] << "j+1: "<<k+1<<endl;
                if (hash[k] != (k + 1))
                    return false;
            }
            hash.clear();
        }

        // column check
        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> hash(n, 0);
            for (int j = 0; j < matrix.size(); j++)
            {
                hash[matrix[j][i] - 1] = matrix[j][i];
            }

            for (int j = 0; j < matrix.size(); j++)
            {
                if (hash[j] != (j + 1))
                    return false;
            }

            hash.clear();
        }

        return true;
    }
};