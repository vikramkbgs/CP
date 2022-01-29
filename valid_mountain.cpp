class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        // arr.push_back(0);
        int i = 0;
        int incnt, dcnt;
        incnt = dcnt = 0;
        int start = 0;
        while (i < arr.size() - 1)
        {
            if (arr[i] < arr[i + 1])
            {
                start = arr[i];
                i++;
                incnt++;
                while (i < arr.size() - 1)
                {
                    if (arr[i] < arr[i + 1])
                        i++;
                    else
                        break;
                }
            }
            else if (arr[i] > arr[i + 1])
            {
                i++;
                dcnt++;
                while (i < arr.size() - 1)
                {
                    if (arr[i] > arr[i + 1])
                        i++;
                    else
                        break;
                }
            }
            else
                return false;
        }
        if (incnt == 1 && dcnt == 1 && start == arr[0])
            return true;
        return false;
    }
};