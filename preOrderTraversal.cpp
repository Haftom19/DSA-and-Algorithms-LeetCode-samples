#include<iostream>
#include <stack>

using namespace std;
struct node
{
    int data;
    node* left;
    node* right;


 node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void preOrderRecursive (node* root)
{
    if (root==nullptr)
    {
        return;
    }
cout<<root->data<<" ";
preOrderRecursive(root->left);
preOrderRecursive(root->right);
    
}

void preOrderIterative (node* root)
{

    if (root==nullptr)
    {
        return;
    }
    
    stack<node*>stack;
    stack.push(root);

   while (!stack.empty())
   {
    node* current=stack.top();
    stack.pop();
    cout<<current->data<<" ";

    if (current->right!= nullptr)
    {
        stack.push(current->right);
    }

    if (current->left)
    {
        stack.push(current->left);
    }
    
   }

}

int main ()
{
node* root =new node(1);
root->left=new node(2);
root->right=new node(3);

root->left->left=new node(4);
root->left->right=new node(5);

cout<<"Recursive preOrder traversal: ";
preOrderRecursive(root);
cout<<endl;
cout<<"Iterative preOrder traversal: ";
preOrderIterative(root);
cout<<endl;

return 0;
}