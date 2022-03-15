// C++ program to merge two sorted arrays/
#include <iostream>
using namespace std;

// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int n1,
                 int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    int flaga = 0, flagb = 0;
    int cnt = 0;
    if(arr1[0] < arr2[0])
    flaga=1;
    else
    flagb=1;
    // Traverse both array
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j] && flaga == 1)
            {
                i++;
                if(flagb)
                cnt++;
                flagb = 0;
    
            }
        else
           {
               arr3[k++] = arr2[j++];
               if (flaga)
                   cnt++;
               flaga = 0;
               flagb = 1;
           }
    }
    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];

        cout<<"cnt"<<cnt-1<<endl;
}

// Driver code
int main()
{
    int arr1[] = {15,32,34};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {25,43};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << "Array after merging" << endl;
    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";

    return 0;
}
