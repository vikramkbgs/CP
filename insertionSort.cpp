
//one test case fail(90% success)

void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    if (arr.size() == 1)
        return;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1] && j > 0)
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

// 100 accurate
void insertionSort(int n, vector<int> &a)
{
    // Write your code here.
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int element = a[j];
        while (element < a[j - 1] && j > 0)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = element;
    }
}
