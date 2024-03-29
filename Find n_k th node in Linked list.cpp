// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int fractional_node(struct Node *head, int k);

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *ptr, *start = NULL, *ptr1;
        int n, i;
        cin >> n;

        for (i = 0; i < n; i++)
        {
            int value;
            cin >> value;

            ptr = new Node(value);

            if (start == NULL)
            {
                start = ptr;
                ptr1 = ptr;
            }
            else
            {
                ptr1->next = ptr;
                ptr1 = ptr1->next;
            }
        }
        ptr1->next = NULL;
        int k;
        cin >> k;
        int p = fractional_node(start, k);
        cout << p << endl;
    }
}
// } Driver Code Ends

/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
int fractional_node(struct Node *head, int k)
{
    // your code here
    struct Node *temp;

    temp = head;
    double count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // cout<<"test count"<<count<<endl;
    int index_result = ceil(count / k);
    // cout<<"index: "<<index_result<<endl;
    int i = 1;

    temp = head;
    while (temp != NULL)
    {
        if (index_result == i)
            return temp->data;

        // cout<<"test: "<<temp->data<<" i :"<<i<<endl;
        i++;
        temp = temp->next;
    }
    return 0;
}
