#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3, max = 0;
        long long int input;
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(input);
        }
        for (int i = 0; i < 3; i++)
            if (max <= v[i])
                max = v[i];

        if (v[0] > v[1] && v[0] > v[2])
            cout << "0"
                 << " " << (v[0] - v[1] + 1) << " " << (v[0] - v[2] + 1) << endl;
        else if (v[1] > v[0] && v[1] > v[2])
            cout << (v[1] - v[0] + 1) << " "
                 << "0"
                 << " " << (v[1] - v[2] + 1) << endl;
        else if (v[2] > v[0] && v[2] > v[1])
            cout << (v[2] - v[0] + 1) << " " << (v[2] - v[1] + 1) << " "
                 << "0" << endl;
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (max >= v[i])
                    cout << max - v[i] + 1;
                if (i < 2)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
