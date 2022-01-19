#include <bits/stdc++.h>
using namespace std;
int getNoOfSmallerElements(vector<int> &v, int s, int e)
{
    int count = 0;
    for (auto &i : v)
    {
        if (i < v[e])
            count++;
    }
    return count;
}
void doPartition(vector<int> &v, int s, int e, int pivot)
{
    // if we find an element greater than the pivot to the left of the pivot
    // we have to find an element less than the pivot lying to the right of the pivot
    int i = e;
    while (s < pivot) // runs from start the pivot index
    {
        if (v[s] > v[pivot]) // if the element is greater than pivot, then search
        {
            while (v[i] > v[pivot])
                i--; // look for the element smaller the pivot the right of the pivot index
            int temp = v[i];
            v[i] = v[s];
            v[s] = temp; // swap with the element found larger to the left of pivot to the element found smaller to the right of the pivot
        }
        s++;
    }
}
int getPivotIndex(vector<int> &v, int s, int e)
{
    int count = getNoOfSmallerElements(v, s, e);
    int temp = v[count];
    v[count] = v[e];
    v[e] = temp;
    doPartition(v, s, e, count);
    return count;
}
void quickSort(vector<int> &v, int s, int e)
{
    if (s >= e)
        return;
    int pivotIndex = getPivotIndex(v, s, e); // we are getting the pivot element
    quickSort(v, s, pivotIndex - 1);         // we are calling for left subarray
    quickSort(v, pivotIndex + 1, e);         // we are calling for right subarray
}
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (auto &i : v)
        cin >> i;
    quickSort(v, 0, v.size() - 1);
    for (auto &i : v)
        cout << i << " ";
}