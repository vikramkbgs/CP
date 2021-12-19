void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    int i = m + 1, j = arr.size() - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
