class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {

        vector<int> tarr;
        int size = arr.size();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
                tarr.push_back(0);

            tarr.push_back(arr[i]);
            if (tarr.size() >= arr.size())
                break;
        }

        arr.clear();
        arr.insert(arr.begin(), tarr.begin(), tarr.begin() + size);

        return;
    }
};