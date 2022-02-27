/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define input(x)         \
    for (int &(i) : (x)) \
    cin >> i

using namespace std;

int rainPick(int arr[], int n)
{
    int fu, fd, mx1 = 0, c1 = 0, c2 = 0, mx2 = 0; // flag up, flag down, max pick, count
    fu = 0;
    fd = 0;
    int temp1 = arr[0];
    int temp2 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (temp1 >= arr[i])
            c1++;
        else
            c1 = 0;

        if (temp2 <= arr[i])
            c2++;
        else
            c2 = 0;

        if (mx1 <= c1)
            mx1 = c1;

        if (mx2 <= c2)
            mx2 = c2;

        temp1 = arr[i];
        temp2 = arr[i];
    }

    int i = 1, mpick = 0, mxp = 0, temp = 0;
    temp = arr[0];
    n--;

    while (n > 0)
    {
        if (temp <= arr[i])
        {
            while (n > 0 && temp <= arr[i])
            {
                mpick++;
                temp = arr[i];
                i++;
                n--;
                fu = 1;
            }
        }
        if (fu)
        {
            while (n > 0 && temp >= arr[i])
            {
                mpick++;
                temp = arr[i];
                i++;
                n--;
                fd = 1;
            }
        }
        else
        {
            n--;
            i++;
        }
        if (fu && fd && mxp <= mpick)
        {
            mxp = mpick;
        }
        fu = fd = 0;
        mpick = 0;
    }

    return max(mxp, max(mx1, mx2));
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(arr);
    cout << rainPick(arr, n) + 1 << endl;
    return 0;
}