/*-------------------------------------------------Vikram Roy------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define input(x)          \
    for (auto &(i) : (x)) \
    cin >> i
#define output(x)         \
    for (auto &(i) : (x)) \
    cout << i

using namespace std;
int main()
{
    int n;
    cin >> n;
    int blocks[n];

    input(blocks);

    int f = 0; // flag
    int afterGravity[n] = {0};

    int sumOfBlocks = 0;
    sumOfBlocks = accumulate(blocks, blocks + n, sumOfBlocks);

    while (sumOfBlocks > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (blocks[i] > 0)
            {
                f++;
                blocks[i]--;
            }
        }

        sumOfBlocks -= f;
        int j = n - 1;
        while (f > 0 && j >= 0)
        {
            afterGravity[j]++;
            j--;
            f--;
        }
    }
    output(afterGravity) << " ";

    return 0;
}