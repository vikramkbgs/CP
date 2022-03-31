#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n = 5; 
    int a[] = {1, 2, 3, 4, 5}; 
    int i = 0; 
    int count = 0; 
    while (true)
    {
        cout << a[i]; 
        i--; 
        if (i == -1)
          {  i = 4;
          count++; }
        if (count == 2)
        break;  
    }
}