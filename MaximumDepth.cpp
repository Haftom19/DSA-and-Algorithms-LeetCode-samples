#include <iostream>
using namespace std;

struct node {
      int val;
      node* left;
      node* right;

      node(int x) : val(x),left(nullptr),right(nullptr) {} 
};

int maxDepth(node* root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftDepth=maxDepth(root->left);
    int rightDepth=maxDepth(root->right);

    return max(leftDepth,rightDepth)+1;   
    
}

int main ()
{
    node * root = new node(3);
    root->left = new node(9);
    root->right= new node(20);
    root->right->left =new node(15);
    root->right->right = new node(7);

    int depth =maxDepth(root);
    cout<<"maximum depth : "<<depth<<endl;

    return 0;
}