int binarySearch(int arr[], int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (low == high)
            return arr[low];

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
                return binarySearch(arr, mid + 2, high);

            else
                return binarySearch(arr, low, mid);
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
                return binarySearch(arr, mid + 1, high);
            else
                return binarySearch(arr, low, mid - 1);
        }
    }
    return -1;
}