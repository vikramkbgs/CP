class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (i == j)
                    graph[i][j] = 1;

        for (int i = 0; i < trust.size(); i++)
            for (int j = 0; j < 1; j++)
            {
                graph[trust[i][j]][trust[i][j + 1]] = 1;
            }

        /*     for (vector<int> vect1D : graph)
             {
                 for (int x : vect1D)
                 {
                     cout << x << " ";
                 }
                 cout << endl;
             }
             */
        // check column

        for (int i = 1; i <= n; i++)
        {
            bool column = false;
            bool row = true;

            // cout<<"i: "<<i<<endl;
            for (int j = 1; j <= n; j++)
            {
                if (graph[j][i] == 1)
                {
                    column = true;
                    continue;
                }
                else
                {
                    column = false;
                    break;
                }
            }
            
            //check rows
            int count = 0;

            for (int j = 1; j <= n; j++)
            {
                if (graph[i][j] == 1)
                {
                    count++;
                    continue;
                }
            }

            if (count > 1)
                row = false;

            if (column && row)
                return i;

            // cout<<count<<" column: "<<column<<endl;
        }

        return -1;
    }
};
