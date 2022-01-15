int binarySearch(int *arr, int low, int high, int val)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == val)
            return mid;

        if (arr[mid] > val)
            return binarySearch(arr, low, mid - 1, val);

        if (arr[mid] < val)
            return binarySearch(arr, mid + 1, high, val);
    }
    return -1;
}

int binarySearch(int *input, int n, int val)
{
    // Write your code here
    return binarySearch(input, 0, n - 1, val);
}