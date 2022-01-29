#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


int main()
{
   struct node * root = new node();
   root->data = 1;

   struct node *fchild = new node();
   fchild->data = 2;
   fchild->left = nullptr;
   fchild->right = nullptr;

   struct node *schild = new node();
   schild->data = 3;
   schild->left = nullptr;
   schild->right = nullptr;

   root->left = fchild;
   root->right = schild;
}