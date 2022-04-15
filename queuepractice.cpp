#include<bits/stdc++.h>
using namespace std;

class linearcontainer
{
    int *a;
    int front, rear;
    public:
    linearcontainer(int k)
    {
        a = new int[k];
        front = -1;
        rear = -1;
    }
    void add(int x)
    {
        a[++rear] = x;
    }

    void print(){
        while(front < rear)
        {
            cout<<a[++front]<<" ";
        }
    }
};

int main()
{
    linearcontainer q(5);
    q.add(2);
    q.add(3);
    q.add(4);
    q.print();
}