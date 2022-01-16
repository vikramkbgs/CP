#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>dancer(n,0);
    vector<vector<int>>danceOrder;
    
    for(int i =0; i<m; i++)
    {
        vector<int>temp;
        for(int j =0; j<3; j++)
        {
            int val;
            cin>>val;
            temp.push_back(val);
        }
        danceOrder.push_back(temp);
    }
    //
    for(int i =0; i<m; i++)
    {
         vector<int>color(3,0);
        for(int j =0; j<3; j++)
        {
            if(dancer[danceOrder[i][j] - 1] == 0)
            {
                for(int k =0; k<3; k++)
                {
                    if(color[k] == 0)
                    {
                        dancer[danceOrder[i][j] - 1] = k + 1;
                        break;
                    }
                }
            }
            else
                color[dancer[danceOrder[i][j]]-1] = 1;
        }
        //color.clear();
    }
   // 
   for(int i =0; i<dancer.size(); i++)
    cout<<dancer[i]<<" ";
}
