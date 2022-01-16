#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n, x;
        cin >> n >> x;

        std::vector<int> fd(n, 0);

        for (int i = 0; i < n; i++)
            cin >> fd[i];

        sort(fd.begin(), fd.end(), greater<int>());

        int count = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += fd[i];
            count++;

            if (sum >= x)
            {
                std::cout << count << std::endl;
                break;
            }
        }

        if (sum < x)
            cout << -1 << endl;
    }
    return 0;
}
