int binarySearch(vector<int>&arr, int l, int r, int x)
    {
    while(r >= l)
    {
        int mid = l + (r-l)/2;
        
        if(arr[mid] == x)
            return mid;
        
        if(arr[mid] > x)
            return binarySearch(arr, l , mid - 1, x);
        
        return binarySearch(arr, mid+1, r ,  x);
    }
    return -1; 
    }
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first, last;
    first = last = binarySearch(arr, 0, n-1, k);
    
    pair<int, int> res = make_pair(-1,-1);
    if(first == -1 )
        return res;
    
    while(arr[first] == k && first >= 0 )
    {
        if(arr[first] == k )
            first--;
    } 
 
    while(arr[last] == k && last < n )
    {
        if(arr[last] == k )
            last++;
    } 
    res = make_pair(first+1,last-1);
    return res;
}
