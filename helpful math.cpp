#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> arr;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+')
            arr.push_back((int)str[i]);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++)
        cout << (char)arr[i] << "+";

    cout << (char)arr[arr.size() - 1];
}