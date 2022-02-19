#include <bits/stdc++.h>
#define sz(x) (x).size()
#define pb push_back
#define ll long long
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int d1, d2, d3, d4;
    n++;
    for(int i =1000; i<=9000; i++)
    {
            d1 = n/1000;
            d2 = (n/100)%10;
            d3 = (n/10)%10;
            d4 = n%10;
            if(d1 != d2 && d1 != d3 && d1 != d4
            && d2 != d3 && d2 != d4 && d3 != d4)
            {
                cout<<n<<endl;
                break;
            }
            n++;
    }
    return 0;
}